fun calcularMedia(notas : DoubleArray) : Double {
    return (notas[0] + notas[1] + notas[2]) / 3
}

fun show(notas : DoubleArray, media : Double, status : String) {
    println("""
            Notas: ${notas.joinToString(separator = " | " )}
            Media do aluno: $media
            Situação: $status
        """.trimIndent())
}

fun status(media : Double) : String {
    if (media < 5){
        return "Reprovado"
    } else if (media < 7){
        return "Em recuperação"
    } else {
        return "Aprovado"
    }
}

fun main() {
    val notas = DoubleArray(3)

    println("Informe as tres notas:")
    for ( i in notas.indices) {
        print(">>> ")
        notas[i] = readln().toDouble()
    }
    val media : Double = calcularMedia(notas)
    val status : String = status(media)
    show(notas, media, status)

}
