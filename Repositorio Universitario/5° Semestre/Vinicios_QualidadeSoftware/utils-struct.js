concatenarArrays = (arr1, arr2) => {
    arr1.push(arr2);
    return arr1;
}

mesclarObjetos = (objeto1, objeto2) => {
    return { ...objeto1, ...objeto2 };
}

const contemChave = (obj, chave) => {
    return obj.hasOwnProperty(chave);
};

const contarOcorrencias = (arr, elemento) => {
    return arr.filter(e => e === elemento).length;
};

const inverterObjeto = (obj) => {
    const invertido = {};
    for (const chave in obj) {
        invertido[obj[chave]] = chave;
    }
    return invertido;
};

module.exports = {
    concatenarArrays,
    mesclarObjetos,
    contemChave,
    contarOcorrencias,
    inverterObjeto
};