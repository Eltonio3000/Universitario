const {
    validarEmail,
    contarCaracteres,
    inverterString,
    converterParaMaiusculas,
    ehPalindromo,
    contarOcorrenciasSubstring,
    removerEspacosExtras,
    terminaCom
} = require('./utils-strings');

describe('Função validarEmail', () => {
    test('deve validar email correto', () => {
        expect(validarEmail('teste@email.com')).toBe(true);
    });

    test('deve rejeitar email inválido', () => {
        expect(validarEmail('testeemail.com')).toBe(false);
    });
});

describe('Função contarCaracteres', () => {
    test('deve contar corretamente os caracteres', () => {
        expect(contarCaracteres('JavaScript')).toBe(10);
    });

    test('deve retornar 0 para string vazia', () => {
        expect(contarCaracteres('')).toBe(0);
    });
});

describe('Função inverterString', () => {
    test('deve inverter uma string', () => {
        expect(inverterString('abc')).toBe('cba');
    });
});

describe('Função converterParaMaiusculas', () => {
    test('deve converter para letras maiúsculas', () => {
        expect(converterParaMaiusculas('teste')).toBe('TESTE');
    });
});

describe('Função ehPalindromo', () => {
    test('deve identificar um palíndromo', () => {
        expect(ehPalindromo('ovo')).toBe(true);
    });

    test('deve identificar frase palíndroma', () => {
        expect(ehPalindromo('Ame a ema')).toBe(true);
    });

    test('deve retornar false para palavra comum', () => {
        expect(ehPalindromo('javascript')).toBe(false);
    });
});

describe('Função contarOcorrenciasSubstring', () => {
    test('deve contar ocorrências da substring', () => {
        expect(contarOcorrenciasSubstring('banana', 'na')).toBe(2);
    });

    test('deve retornar 0 quando não houver ocorrência', () => {
        expect(contarOcorrenciasSubstring('banana', 'xy')).toBe(0);
    });
});

describe('Função removerEspacosExtras', () => {
    test('deve remover espaços extras', () => {
        expect(removerEspacosExtras('  Olá    mundo  '))
            .toBe('Olá mundo');
    });
});

describe('Função terminaCom', () => {
    test('deve retornar true quando terminar com o sufixo', () => {
        expect(terminaCom('javascript', 'script')).toBe(true);
    });

    test('deve retornar false quando não terminar com o sufixo', () => {
        expect(terminaCom('javascript', 'java')).toBe(false);
    });
});