const express = require('express');
const router = express.Router(); // ferramenta para criar rotas separadas
const livrosController = require('../controller/livrosController'); // Importa o controlador de livros

// Rota para listar os livros "/livros"
router.get('/', livrosController.listarlivros); // Define a rota GET para listar os livros, chamando a função do controlador

// Rota para criar um novo livro
router.post('/', livrosController.createBook); // Define a rota POST para adicionar um novo livro, chamando a função do controlador

// Rota para obter um livro por ID
router.get('/:id', livrosController.obterLivro); // Define a rota GET para obter um livro por ID, chamando a função do controlador

// Rota para remover um livro por ID
router.delete('/:id', livrosController.removerLivro); // Define a rota DELETE para remover um livro por ID, chamando a função do controlador

// Rota para atualizar um livro por ID
router.put('/:id', livrosController.atualizarLivro); // Define a rota PUT para atualizar um livro por ID, chamando a função do controlador

module.exports = router; // Exporta o router para ser usado em outros arquivos, como app.js