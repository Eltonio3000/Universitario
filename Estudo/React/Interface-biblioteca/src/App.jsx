import { useState, useEffect } from 'react'
import './App.css'

function App() {
  // Criamos as "memórias" (Estados) para os campos do formulário
  const [titulo, setTitulo] = useState(''); // Memória para o campo título
  const [autor, setAutor] = useState(''); // Memória para o campo autor
  const [idEditando, setIdEditando] = useState(null); // Memória para saber se estamos editando um livro (guarda o ID do livro sendo editado)
  const [livros, setLivros] = useState([]); // Criamos a memória para a lista de livros que vem do banco

  // Função para buscar os livros no Back-end (Node.js)
  const buscarLivros = async () => {
    try {
      const resposta = await fetch('http://localhost:3000/livros');
      const dados = await resposta.json();
      setLivros(dados);
    } catch (err) {
      console.error("Erro ao buscar:", err);
    }
  };

  // useEffect faz a busca assim que a página abre
  useEffect(() => {
    buscarLivros();
  }, []);

  // Função para preparar o formulário para edição de um livro existente
  const prepararEdicao = (livro) => {
  setTitulo(livro.titulo);
  setAutor(livro.autor);
  setIdEditando(livro.id); // Guardamos o ID para saber quem atualizar depois
  };

  const deletarLivro = async (id) => {
    if (window.confirm("Tem certeza que quer apagar este livro?")) {
      try {
        const resposta = await fetch(`http://localhost:3000/livros/${id}`, {
          method: 'DELETE',
        });

        if (resposta.ok) {
          buscarLivros(); // Atualiza a lista automaticamente
        }
      } catch (erro) {
        console.error("Erro ao deletar:", erro);
      }
    }
  };

  // Função para salvar um livro (tanto para criar quanto para atualizar(subtituiu a função adicionarLivro))
  const salvarLivro = async (e) => {
  e.preventDefault();

  // Se temos um idEditando, o método é PUT e a URL leva o ID.
  // Caso contrário, é um POST comum.
  const metodo = idEditando ? 'PUT' : 'POST';
  const url = idEditando 
    ? `http://localhost:3000/livros/${idEditando}` 
    : 'http://localhost:3000/livros';

  try {
    const resposta = await fetch(url, {
      method: metodo,
      headers: { 'Content-Type': 'application/json' },
      body: JSON.stringify({ titulo, autor })
    });

    if (resposta.ok) {
      setTitulo('');
      setAutor('');
      setIdEditando(null); // Limpa o modo de edição
      buscarLivros(); // Atualiza a lista
    }
  } catch (erro) {
    console.error("Erro ao salvar:", erro);
  }
};

  /*
  // Função para adicionar um novo livro ao banco
  const adicionarLivro = async (e) => {
    e.preventDefault(); // Impede a página de recarregar

    if (!titulo || !autor) return alert("Preencha todos os campos!");

    try {
      const resposta = await fetch('http://localhost:3000/livros', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ titulo, autor }) // Envia os dados dos inputs
      });

      if (resposta.ok) {
        setTitulo(''); // Limpa o campo título
        setAutor('');  // Limpa o campo autor
        buscarLivros(); // Atualiza a lista automaticamente!
      }
    } catch (erro) {
      console.error("Erro ao adicionar:", erro);
    }
  };*/

  return (
    <div className="container">
      <h1>📚 Minha Biblioteca</h1>

      {/* Formulário para adicionar novos livros */}
      <form onSubmit={salvarLivro}>
        <input 
          type="text" 
          placeholder="Título do Livro" 
          value={titulo} // O valor do input vem da nossa variável 'titulo'
          onChange={(e) => setTitulo(e.target.value)} // Quando digitas, atualiza a variável
        />
        
        <input 
          type="text" 
          placeholder="Autor" 
          value={autor} 
          onChange={(e) => setAutor(e.target.value)} 
          required
        />

        <button type="submit">{idEditando ? 'Salvar Alterações' : 'Adicionar Livro'}</button>
        {/* Botão extra para cancelar a edição caso o usuário desista */}
        {idEditando && (
          <button 
            type="button" 
            onClick={() => { setIdEditando(null); setTitulo(''); setAutor(''); }}
            style={{ backgroundColor: '#ccc', marginTop: '10px' }}
          >
            Cancelar
          </button>
        )}
      </form>

      {/* Lista de livros cadastrados */}
      <ul>
        {livros.map((livro) => (
          <li key={livro.id}>
            <div>
              <strong>{livro.titulo}</strong><br />
              <span className="autor">{livro.autor}</span>
            </div>
            <div className="botoes-acao">
              {/* Botão para editar o livro, que chama a função prepararEdicao passando o livro atual */}
              <button
                onClick={() => prepararEdicao(livro)}
                style={{ width: 'auto', padding: '5px 10px', background: '#f1c40f', marginTop: '5px' }}
                >
                  Editar
              </button> 
              {/* Botão para deletar o livro, que chama a função deletarLivro passando o ID do livro */}
              <button 
                onClick={() => deletarLivro(livro.id)}
                style={{ width: 'auto', padding: '5px 10px', background: '#e74c3c', color: 'white',  }}
                  >
                  Excluir
              </button>
            </div>
          </li>
        ))}
      </ul>
    </div>
  )
}

export default App