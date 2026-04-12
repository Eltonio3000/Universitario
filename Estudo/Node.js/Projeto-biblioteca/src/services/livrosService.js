// Simulando um banco de dados com um array de livros // temporario
/*let livros = [
    {id: 1, titulo: "O Senhor dos Anéis", autor: "J.R.R. Tolkien"},
    {id: 2, titulo: "Harry Potter e a Pedra Filosofal", autor: "J.K. Rowling"},
    {id: 3, titulo: "O Código Da Vinci", autor: "Dan Brown"}
]*/

const db = require('../database');

//função que retorna todos os livros
const getAllBooks = async () => {
    const res = await db.query('SELECT * FROM livros ORDER BY id ASC'); //consulta SQL para selecionar todos os livros ordenados por id
    return res.rows; //retorna as linhas do resultado da consulta, que são os livros
    /*return livros;*/ // usando array
};

const createBook = async (dados) => {
    //criar um novo livro com os dados recebidos

    const { titulo, autor} = dados; //desestruturação para extrair titulo e autor do objeto dados
    const query = 'INSERT INTO livros (titulo, autor) VALUES ($1, $2) RETURNING *'; //consulta SQL para inserir um novo livro e retornar o livro criado
    const values = [titulo, autor]; //array de valores para a consulta parametrizada

    const res = await db.query(query, values); //executa a consulta com os valores fornecidos
    return res.rows[0]; //retorna o primeiro livro criado, que é o resultado da consulta

    /*const newBook = {
        id: livros.length + 1,
        titulo: dados.titulo,
        autor: dados.autor
    }

    livros.push(newBook); //adiciona o novo livro ao array
    return newBook;*/ //retorna o novo livro criado
};

//função para buscar um livro pelo id
const buscarID = async(id) => {
    //podemos usar o metodo .find para buscar o livro pelo id

    const query = 'SELECT * FROM livros WHERE id = $1'; //consulta SQL para selecionar um livro pelo id
    const res = await db.query(query, [id]); //executa a consulta com o id fornecido
    return res.rows[0]; //retorna o primeiro livro encontrado, que é o resultado da consulta

    /*
    //o id que vem da URL e texto, entao precisamos converter para numero usando Number()
    return livros.find(livros => livros.id === Number(id));*/
};

//função para remover um livro pelo id
const removerLivro = async(id) => {
    const query = 'DELETE FROM livros WHERE id = $1'; //consulta SQL para deletar um livro pelo id
    const res = await db.query(query, [id]); //executa a consulta com o id fornecido
    return res.rowCount > 0; //retorna true se um livro foi deletado, caso contrário retorna false

    /*const existe = livros.find(l => l.id === Number(id)); //verifica se o livro existe
    if (!existe) return false; //se o livro não existe, retorna false

    livros = livros.filter(livro => livro.id !== Number(id)); //filtra o array para remover o livro
    return true; *///retorna true para indicar que o livro foi removido com sucesso
};

// função para atualizar um livro pelo id
const atualizarLivro = async(id, novosDados) => {
    const { titulo, autor} = novosDados; //desestruturação para extrair titulo e autor do objeto novosDados
    const query = 'UPDATE livros SET titulo = $1, autor = $2 WHERE id = $3 RETURNING *'; //consulta SQL para atualizar um livro pelo id e retornar o livro atualizado
    const resultado = await db.query(query, [titulo, autor, id]);

    return resultado.rows[0]; //retorna o livro atualizado, que é o resultado da consulta

    /*const idNumero = Number(id);
    
    //procurar a posição (indice) do livro na lista
    const indice = livros.findIndex (l => l.id === idNumero);

    //se o finderIndex retornar -1, significa que o livro não foi encontrado
    if (indice === -1 ) return null;
    
    //atualizar o livro mantendo o id original
    // o operador '...' (spread) copia as propriedades do livro existente e depois sobrescreve com os novos dados
    livros[indice] = {
        id : idNumero,
        titulo: novosDados.titulo,
        autor: novosDados.autor
    }
    return livros[indice];*/ //retorna o livro atualizado
};

module.exports = {
    getAllBooks,
    createBook,
    buscarID,
    removerLivro,
    atualizarLivro
}; // Exporta a função para ser usada em outros arquivos, como livrosRoutes.js