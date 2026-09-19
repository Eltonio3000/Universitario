fun rotacionarMatrizDePontos(pontos : Array<Ponto2D>, anguloGraus : Double) : Array<Ponto2D> {
    return pontos.map { it.rotacionar(anguloGraus) }.toTypedArray()
}


fun main() {
    val pontosOriginais = arrayOf(
        Ponto2D(0.0, 4.0),
        Ponto2D(3.0, 4.0),
        Ponto2D(3.0, 0.0)
    )


    val angulo = 90.0
    val pontosRotacionados = rotacionarMatrizDePontos(pontosOriginais, angulo)


    println("--- Pontos Originais ---")
    for ((index, ponto) in pontosOriginais.withIndex()) {
        println("P${index + 1}: $ponto")
    }


    println("\n--- Pontos Após Rotação de $angulo° ---")
    for ((index, ponto) in pontosRotacionados.withIndex()) {
        println("P${index + 1}’: $ponto")
    }
}
