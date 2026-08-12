const {
    concatenarArrays,
    mesclarObjetos,
    contemChave,
    contarOcorrencias,
    inverterObjeto
} = require('./utils-struct');

describe('Função concatenarArrays', () => {

    test('deve concatenar dois arrays', () => {
        expect(
            concatenarArrays([1, 2], [3, 4])
        ).toEqual([1, 2, 3, 4]);
    });

});

describe('Função mesclarObjetos', () => {

    test('deve mesclar dois objetos', () => {
        expect(
            mesclarObjetos(
                { nome: 'João' },
                { idade: 20 }
            )
        ).toEqual({
            nome: 'João',
            idade: 20
        });
    });

    test('deve sobrescrever propriedades iguais', () => {
        expect(
            mesclarObjetos(
                { nome: 'João' },
                { nome: 'Maria' }
            )
        ).toEqual({
            nome: 'Maria'
        });
    });

});

describe('Função contemChave', () => {

    test('deve retornar true quando a chave existir', () => {
        expect(
            contemChave(
                { nome: 'João' },
                'nome'
            )
        ).toBe(true);
    });

    test('deve retornar false quando a chave não existir', () => {
        expect(
            contemChave(
                { nome: 'João' },
                'idade'
            )
        ).toBe(false);
    });

});

describe('Função contarOcorrencias', () => {

    test('deve contar corretamente as ocorrências', () => {
        expect(
            contarOcorrencias(
                [1, 2, 1, 3, 1],
                1
            )
        ).toBe(3);
    });

    test('deve retornar zero quando não houver ocorrências', () => {
        expect(
            contarOcorrencias(
                [1, 2, 3],
                4
            )
        ).toBe(0);
    });

});

describe('Função inverterObjeto', () => {

    test('deve inverter chaves e valores', () => {
        expect(
            inverterObjeto({
                nome: 'João',
                idade: '20'
            })
        ).toEqual({
            João: 'nome',
            20: 'idade'
        });
    });

});