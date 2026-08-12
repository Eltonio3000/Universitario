validarEmail = (email) => {
    const regex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    return regex.test(email);
}

contarCaracteres = (str) => {
    return str.length;
}

inverterString = (str) => {
    return str.split("").reverse().join(" ");
}

converterParaMaiusculas = (str) => {
    return str.toUpperCase();
}

const ehPalindromo = (str) => {
    const normalizada = str.toLowerCase().replace(/[^a-z0-9]/g, '');
    return normalizada === normalizada.split('').reverse().join('');
};

const contarOcorrenciasSubstring = (texto, sub) => {
    return texto.split(sub).length - 1;
};

const removerEspacosExtras = (str) => {
    return str.trim().replace(/\s+/g, ' ');
};

const terminaCom = (str, sufixo) => {
    return str.endsWith(sufixo);
};

module.exports = {
    validarEmail,
    contarCaracteres,
    inverterString,
    converterParaMaiusculas,
    ehPalindromo,
    contarOcorrenciasSubstring,
    removerEspacosExtras,
    terminaCom
};