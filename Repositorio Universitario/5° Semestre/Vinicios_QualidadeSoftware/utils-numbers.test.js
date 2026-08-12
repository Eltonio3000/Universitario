const {
    ehPar,
    ehImpar,
    calcularFatorial,
    fibonacci,
    calcularMediaPonderada,
    calcularMediaAritmetica,
    ordenarNumeros,
    calcularPotencia
} = require('./utils-numbers');

describe('Função ehPar', () => {
    test('deve retornar true para número par', () => {
        expect(ehPar(4)).toBe(true);
    });

    test('deve retornar false para número ímpar', () => {
        expect(ehPar(5)).toBe(false);
    });
});

describe('Função ehImpar', () => {
    test('deve retornar true para número ímpar', () => {
        expect(ehImpar(7)).toBe(true);
    });

    test('deve retornar false para número par', () => {
        expect(ehImpar(8)).toBe(false);
    });
});

describe('Função calcularFatorial', () => {
    test('fatorial de 0 deve ser 1', () => {
        expect(calcularFatorial(0)).toBe(1);
    });

    test('fatorial de 5 deve ser 120', () => {
        expect(calcularFatorial(5)).toBe(120);
    });
});

describe('Função fibonacci', () => {
    test('fibonacci de 0 deve ser 0', () => {
        expect(fibonacci(0)).toBe(0);
    });

    test('fibonacci de 1 deve ser 1', () => {
        expect(fibonacci(1)).toBe(1);
    });

    test('fibonacci de 6 deve ser 8', () => {
        expect(fibonacci(6)).toBe(8);
    });

    test('deve retornar null para número negativo', () => {
        expect(fibonacci(-1)).toBeNull();
    });
});

describe('Função calcularMediaPonderada', () => {
    test('deve calcular corretamente a média ponderada', () => {
        const notas = [8, 7, 9];
        const pesos = [2, 3, 5];

        expect(calcularMediaPonderada(notas, pesos)).toBe(8.2);
    });
});

describe('Função calcularMediaAritmetica', () => {
    test('deve calcular corretamente a média aritmética', () => {
        expect(calcularMediaAritmetica([10, 8, 6])).toBe(8);
    });

    test('deve retornar null para lista vazia', () => {
        expect(calcularMediaAritmetica([])).toBeNull();
    });
});

describe('Função ordenarNumeros', () => {
    test('deve ordenar números em ordem crescente', () => {
        expect(ordenarNumeros([5, 2, 8, 1])).toEqual([1, 2, 5, 8]);
    });
});

describe('Função calcularPotencia', () => {
    test('qualquer número elevado a 0 deve ser 1', () => {
        expect(calcularPotencia(5, 0)).toBe(1);
    });

    test('2 elevado a 3 deve ser 8', () => {
        expect(calcularPotencia(2, 3)).toBe(8);
    });

    test('3 elevado a 4 deve ser 81', () => {
        expect(calcularPotencia(3, 4)).toBe(81);
    });
});