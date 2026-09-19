fun buscaBinaria(array : IntArray, chave : Int) : Int {
    var init = 0
    var end = array.size - 1
    var step = 1


    while (init <= end) {
        val meio = (init + end) / 2
        val valorMeio = array[meio]


        when {
            valorMeio == chave -> {
                steps(step, init, end, meio, valorMeio, "ENCONTRADO!")
                return meio
            }


            valorMeio < chave -> {
                steps(step, init, end, meio, valorMeio, "Procurar à direita")
                init = meio + 1
            }


            else -> {
                steps(step, init, end, meio, valorMeio, "Procurar à esquerda")
                end = meio - 1
            }
        }
        step++
    }


    // Se saiu do while, a chave não existe no array
    return -1
    /*
    O .binarySearch aceita uma lambda comparando o elemento 'n' com a 'chave' assim...
    return array.binarySearch { n -> n.compareTo(chave) }
    */
}




fun steps(step : Int, inicio : Int, fim : Int, meio : Int, value : Int, direcao : String){
    println("Passo $step: inicio: $inicio fim: $fim meio: $meio (valor: $value) -> $direcao")
}




fun show(array : IntArray, chave : IntArray, indice : Int) {}




fun main() {
    val numerosOrdenados : IntArray = intArrayOf(5,12,18,23,34,45,56,67,78,89)
    val chavesProcuradas : IntArray = intArrayOf(5,56,78,99)


    for (chave in chavesProcuradas) {
        println("\n    Teste — Buscar chave = $chave ")


        val indice = buscaBinaria(numerosOrdenados, chave)


        if (indice != -1) {
            println("Chave $chave encontrada no índice $indice.")
        } else {
            println("Chave $chave não encontrada no array (retorno -1).")
        }
    }
}
