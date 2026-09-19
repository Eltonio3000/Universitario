fun show(
    nome : String,
    nomeHigienizado : String,
    exibicao : String,
) {
    println("""
       Nome Digitado: $nome
       Nome higienizado: $nomeHigienizado
       Nome em Maiúsculas: ${nomeHigienizado.uppercase()}
       Quantidade de Vogais: ${nomeHigienizado.count { it in "aeiou"}}
       Nome de exibição: ${exibicao}
   """.trimIndent())
    val temSobrenome = if (nomeHigienizado.trim().split("\\s+".toRegex()).size >= 2) "sim ${nomeHigienizado.split("\\s+".toRegex()).last()}" else "nome"
    println("Tem sobrenome? $temSobrenome")
}


fun main() {


    println("Digite um nome completo.")
    print(">>> ")
    val nome : String = readlnOrNull().toString()
    val nomeHigienizado = nome.trim().lowercase()
    val lastName = nome.uppercase().split("\\s+".toRegex()).last()
    val firstName = nome.lowercase().split("\\s+".toRegex()).first()
    val nomeExibicao = "$firstName $lastName"
    show(nome, nomeHigienizado, nomeExibicao)
}
