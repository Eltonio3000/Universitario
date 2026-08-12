const ehPar = (n) => {
    return n % 2 === 0;
};

const ehImpar = (n) => {
    return n % 2 !== 0;
}

calcularFatorial = (n) => {
    if (n === 0 || n === 1) {
      return 1;
    }
    return n * calcularFatorial(n - 1);
}

const fibonacci = (n) => {
    if (n < 0) return null;
    if (n === 0) return 0;
    if (n === 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
};

calcularMediaPonderada = (notas, pesos) => {
    const somaNotas = notas.reduce((acc, nota, index) => acc + (nota * pesos[index]), 0);
    const somaPesos = pesos.reduce((acc, peso) => acc + peso, 0);
    return somaNotas / somaPesos;
}

const calcularMediaAritmetica = (numeros) => {
    if (numeros.length === 0) return null;
    const soma = numeros.reduce((acc, num) => acc + num, 0);
    return soma / numeros.length;
};

ordenarNumeros = (lista) => {
    return lista.sort((a, b) => a - b);
}

calcularPotencia = (base, expoente) => {
    if (expoente === 0) 
        return 1;

    else if (expoente % 2 === 0) {
        const temp = calcularPotencia(base, expoente / 2);
        return temp * temp;
    
    } else 

        return base * calcularPotencia(base, expoente - 1);
}

module.exports = {
    ehPar,
    ehImpar,
    calcularFatorial,
    fibonacci,
    calcularMediaPonderada,
    calcularMediaAritmetica,
    ordenarNumeros,
    calcularPotencia
}