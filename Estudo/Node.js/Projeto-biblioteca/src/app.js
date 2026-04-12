const express = require('express'); // Importa o módulo Express
const app = express(); // Cria uma instância do Express
const cors = require('cors'); // Importa o módulo CORS para lidar com requisições de diferentes origens

app.use(express.json()); // Middleware para analisar o corpo das requisições como JSON
app.use(cors()); // Habilita o CORS para todas as rotas

// Rota para a página inicial
app.get('/', (req, res) => {
  res.json({ message: 'Bem-vindo à Biblioteca API!' });
});

// Importa as rotas de livros
const livrosRoutes = require('./routes/livrosRoutes');
app.use('/livros', livrosRoutes); // Usa as rotas de livros para o caminho "/livros"

const PORT = process.env.PORT; // Define a porta para o servidor
app.listen(PORT, () => {
  console.log(`Servidor rodando na porta ${PORT}`);
} ); // Inicia o servidor e exibe uma mensagem no console
