const { GoogleGenAI, Type, Schema } = require('@google/genai');
const fs = require('fs');

const ai = new GoogleGenAI({ apiKey: process.env.GEMINI_API_KEY });

async function extrairDadosDanfe(caminhoDoPdf) {
  // 1. Converte o arquivo PDF local para o formato Base64 esperado pelo Gemini
  const pdfBuffer = fs.readFileSync(caminhoDoPdf);
  const pdfBase64 = pdfBuffer.toString('base64');

  // 2. Define a estrutura exata do JSON que você quer receber de volta
  const schemaDanfe = Schema.object({
    chaveAcesso: Schema.string({ description: 'Chave de acesso de 44 dígitos da NF-e' }),
    numeroNota: Schema.string({ description: 'Número da nota fiscal' }),
    dataEmissao: Schema.string({ description: 'Data de emissão da nota' }),
    emitente: Schema.object({
      cnpj: Schema.string(),
      nomeRazaoSocial: Schema.string(),
    }),
    destinatario: Schema.object({
      cnpjCpf: Schema.string(),
      nomeRazaoSocial: Schema.string(),
    }),
    valorTotal: Schema.number({ description: 'Valor total da nota em formato numérico' }),
    itens: Schema.array({
      items: Schema.object({
        codigo: Schema.string(),
        descricao: Schema.string(),
        quantidade: Schema.number(),
        valorUnitario: Schema.number(),
        valorTotal: Schema.number(),
      }),
    }),
  });

  // 3. Envia o PDF + Prompt + Schema para o Gemini 2.5 Flash
  const response = await ai.models.generateContent({
    model: 'gemini-2.5-flash',
    contents: [
      {
        inlineData: {
          mimeType: 'application/pdf',
          data: pdfBase64,
        },
      },
      'Analise este documento DANFE/Nota Fiscal e extraia todas as informações solicitadas no schema.',
    ],
    config: {
      responseMimeType: 'application/json',
      responseSchema: schemaDanfe,
    },
  });

  // O resultado já vem como uma string JSON perfeita no formato exigido
  return JSON.parse(response.text);
}

module.exports = { extrairDadosDanfe };