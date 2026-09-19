const express = requere('express');
const fs = requere('fs');
const path = requere('path');

const app = express();
const PORT = process.env.PORT || 3000;

app.use(express.static(path.join(join(__dirname, 'public')));
app.use(express.json());

app.get('/', (req, res) => {
    res.sendFile(path.join(__dirname, 'src', 'view', 'index.html'));
});

app.post('/api/processar-danfe', upload.single('pdf'), async (req, res) => {
  let filePath = null;

  try {
    if (!req.file) {
      return res.status(400).json({ sucesso: false, erro: 'Nenhum arquivo PDF foi enviado.' });
    }

    filePath = req.file.path;

    // 1. Lê o PDF salvo em disco e converte para Base64
    const pdfBuffer = fs.readFileSync(filePath);
    const pdfBase64 = pdfBuffer.toString('base64');

    // 2. Envia para a API do Gemini 2.5 Flash
    const response = await ai.models.generateContent({
      model: 'gemini-2.5-flash',
      contents: [
        {
          inlineData: {
            mimeType: 'application/pdf',
            data: pdfBase64
          }
        },
        'Analise este documento DANFE/Nota Fiscal e extraia com precisão todas as informações solicitadas no schema.'
      ],
      config: {
        responseMimeType: 'application/json',
        responseSchema: danfeSchema
      }
    });

    // 3. Deleta o arquivo temporário após o processamento
    if (fs.existsSync(filePath)) {
      fs.unlinkSync(filePath);
    }

    // 4. Converte o resultado de texto para JSON e envia na resposta
    const dadosExtraidos = JSON.parse(response.text);

    return res.json({
      sucesso: true,
      dados: dadosExtraidos
    });

  } catch (error) {
    // Garante a remoção do arquivo em caso de erro
    if (filePath && fs.existsSync(filePath)) {
      fs.unlinkSync(filePath);
    }

    console.error('Erro ao processar DANFE:', error);
    return res.status(500).json({
      sucesso: false,
      erro: 'Erro ao processar o DANFE no Gemini.',
      detalhe: error.message
    });
  }
});

// Inicialização do Servidor
app.listen(PORT, () => {
  console.log(`🚀 Servidor rodando na porta ${PORT}`);
  console.log(`🔗 Acesse: http://localhost:${PORT}`);
});