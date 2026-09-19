leitor-danfe-gemini/
├── uploads/                     # Pasta temporária para guardar os PDFs enviados
├── src/
│   ├── config/
│   │   └── multer.js            # Configuração do recebimento do arquivo PDF
│   ├── controllers/
│   │   └── danfeController.js   # Recebe o arquivo e responde para a página web
│   ├── services/
│   │   └── geminiService.js     # Conecta com a API do Gemini e envia o PDF
│   └── views/                   # Sua página web (HTML/JS para fazer o upload)
│       └── index.html
├── public/                      # CSS/JS estáticos da página web (se necessário)
│   └── style.css
├── .env                         # Onde fica a sua chave: GEMINI_API_KEY
├── package.json
└── server.js                    # Inicializa o servidor Express