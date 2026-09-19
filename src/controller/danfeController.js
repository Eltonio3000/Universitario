const geminiService = require('../services/geminiService');
const fs = require('fs');

async function processarDanfe(req, res) {
  try {
    if (!req.file) {
      return res.status(400).json({ erro: 'Por favor, envie um arquivo PDF.' });
    }

    // Chama o Gemini passando o caminho do PDF que o Multer salvou
    const dadosExtraidos = await geminiService.extrairDadosDanfe(req.file.path);

    // Apaga o arquivo temporário da pasta uploads após o processamento
    fs.unlinkSync(req.file.path);

    // Retorna o JSON completo para a sua página web
    return res.json({
      sucesso: true,
      dados: dadosExtraidos,
    });
  } catch (error) {
    // Garante que o arquivo seja limpo mesmo em caso de erro
    if (req.file && fs.existsSync(req.file.path)) {
      fs.unlinkSync(req.file.path);
    }
    return res.status(500).json({ erro: 'Falha ao processar o DANFE', detalhe: error.message });
  }
}

module.exports = { processarDanfe };