const livrosService = require('../services/livrosService'); // Importa o serviço de livros

// Controlador para listar os livros
//função que o controlador executa ao receber a requisição
const listarlivros = async(req, res) => {

    try {
        const lista = await livrosService.getAllBooks();
        res.status(200).json(lista);
    } catch (error) {
        console.error("Erro no controlador:", error);
        res.status(500).json({ mensagem: "Erro ao buscar livros no banco." });
    }

    /*
    const livros = livrosService.getAllBooks(); // Chama a função do serviço para obter os livros
    res.status(200).json(livros); // Retorna os livros em formato JSON com status 200
    */
};

// Controlador para criar um novo livro
const createBook = async(req, res) => {

    try {
        const newBook = await livrosService.createBook(req.body);
        res.status(201).json(newBook);
    } catch (error) {
        console.error("Erro no controlador:", error);
        res.status(500).json({ mensagem: "Erro ao criar livro no banco." });
    }

    /*
    const dadosRecebidos = req.body; // Obtém os dados do corpo da requisição
    const newBook = livrosService.createBook(dadosRecebidos); // Chama a função do serviço para criar um novo livro
    res.status(201).json(newBook); // Retorna o novo livro criado em formato JSON com status 201
    */
};

// Controlador para obter um livro por ID
const obterLivro = async(req, res)  => {

    try {
        const { id }  = req.params; // isso extrai o id da url
        const livro = await livrosService.buscarID(id); // Chama a função do serviço para buscar o livro pelo ID
        if (!livro) {
            return res.status(404).json({ message: "Livro não encontrado" }); // Retorna um erro 404 se o livro não for encontrado
        }
        res.status(200).json(livro); // Retorna o livro encontrado em formato JSON com status 200
    } catch (error) {
        console.error("Erro no controlador:", error);
        res.status(500).json({ mensagem: "Erro ao buscar livro no banco." });
    }

    /*
    const { id }  = req.params; // isso extrai o id da url
    const livro = livrosService.buscarID(id); // Chama a função do serviço para buscar o livro pelo ID

    if (!livro) {
        return res.status(404).json({ message: "Livro não encontrado" }); // Retorna um erro 404 se o livro não for encontrado
    }
    res.status(200).json(livro); // Retorna o livro encontrado em formato JSON com status 200
    */
}

// Controlador para remover um livro por ID
const removerLivro = async(req, res) => {

    try {
        const { id } = req.params; // Extrai o ID da URL
        const apagado = await livrosService.removerLivro(id); // Chama a função do serviço para remover o livro pelo ID

        if (!apagado) {
            return res.status(404).json({ message: "Livro não encontrado" }); // Retorna um erro 404 se o livro não for encontrado
        }
        res.status(204).send(); // Retorna uma resposta sem conteúdo com status 204 para indicar que o livro foi removido com sucesso
    } catch (error) {
        res.status(500).json({ mensagem: "Erro ao remover livro no banco." });
    }

    /*
    const { id } = req.params; // Extrai o ID da URL
    const apagado = livrosService.removerLivro(id); // Chama a função do serviço para remover o livro pelo ID

    if (!apagado) {
        return res.status(404).json({ message: "Livro não encontrado" }); // Retorna um erro 404 se o livro não for encontrado
    }
    
    res.status(200).json({ message: "Livro removido com sucesso" }); // Retorna uma mensagem de sucesso em formato JSON com status 200
    */
};

// Controlador para atualizar um livro por ID
const atualizarLivro = async(req, res) => {
    
    try {
        const { id } = req.params; // Extrai o ID da URL
        const novosDados = req.body; // Obtém os novos dados do corpo da requisição
        const livroAtualizado =  await livrosService.atualizarLivro(id, novosDados); // Chama a função do serviço para atualizar o livro pelo ID

        if (!livroAtualizado) {
            return res.status(404).json({ message: "Livro não encontrado" }); // Retorna um erro 404 se o livro não for encontrado
        }
        res.status(200).json(livroAtualizado); // Retorna o livro atualizado em formato JSON com status 200
    } catch (error) {
        console.error("Erro no controlador:", error);
        res.status(500).json({ mensagem: "Erro ao atualizar livro no banco." });
    }

    /*
    const { id } = req.params;
    const novosDados = req.body; // Obtém os novos dados do corpo da requisição

    const livroAtualizado = livrosService.atualizarLivro(id, novosDados); // Chama a função do serviço para atualizar o livro pelo ID

    if (!livroAtualizado) {
        return res.status(404).json({ message: "Livro não encontrado" }); // Retorna um erro 404 se o livro não for encontrado
    }

    res.status(200).json(livroAtualizado); // Retorna o livro atualizado em formato JSON com status 200
    */
}

module.exports = {
    listarlivros,
    createBook,
    obterLivro,
    removerLivro,
    atualizarLivro
};