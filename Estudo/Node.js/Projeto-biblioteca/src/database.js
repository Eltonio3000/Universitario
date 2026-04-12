// importampos o pool do pacote pg que instalamos para conectar ao banco de dados PostgreSQL
const { Pool } = require('pg');
require('dotenv').config(); // Carrega as variáveis do ficheiro .env

//configuramops os detalhes da ligação
const pool = new Pool({
    user: process.env.DB_USER,          // O utilizador padrão do PostgreSQL
    host: process.env.DB_HOST,          // O banco está a correr no teu computador
    database: process.env.DB_NAME,  // O nome exato que deste no pgAdmin
    password: process.env.DB_PASSWORD,    // A senha que definiste na instalação
    port: process.env.DB_PORT,                 // A porta padrão do PostgreSQL
})

// Um pequeno teste para garantir que a ligação funciona
pool.connect((err, client, release) => {
    if (err) {
        return console.error('❌ Erro ao ligar à base de dados:', err.stack);
    }
    console.log('✅ Conectado ao PostgreSQL com sucesso!');
    release(); // Liberta a ligação para a "piscina" (pool)
});

module.exports = pool;