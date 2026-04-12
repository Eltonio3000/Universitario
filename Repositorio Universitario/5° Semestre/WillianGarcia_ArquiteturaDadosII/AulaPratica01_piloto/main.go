package main

import "fmt"

/*
Crie um programa que solicite ao usuario dois números e uma
operação (+, -, *, /). Use fmt.Scan para ler os valores e um switch para
determinar qual operação executar. Implemente cada operação
matemática em uma função separada e exiba o resultado formatado.
*/

func soma(a int, b int) int {
	return a + b
}
func subt(a int, b int) int {
	return a - b
}
func divs(a int, b int) int {
	return a / b
}
func mult(a int, b int) int {
	return a * b
}

func questaoUm() {
	numUm := 0
	numDois := 0
	resultado := 0
	escolha := " "

	fmt.Println("digite um numero:")
	fmt.Scan(&numUm)
	fmt.Println("digite outro numero:")
	fmt.Scan(&numDois)
	fmt.Println("escolha uma operação(* , - , + , /):")
	fmt.Scan(&escolha)
	for i := 0; i != 1; {
		switch escolha {
		case "multiplicação", "Multiplicação", "MULTIPLICAÇÃO", "multiplicacao", "Multiplicacao", "MULTIPLICACAO", "*":
			resultado = mult(numUm, numDois)
			fmt.Println("resultado e ", resultado)
			i = 1
		case "subtração", "Subtração", "SUBTRAÇÃO", "subtracao", "Subtracao", "SUBTRACAO", "-":
			resultado = subt(numUm, numDois)
			fmt.Println("resultado e ", resultado)
			i = 1
		case "soma", "Soma", "SOMA", "+":
			resultado = soma(numUm, numDois)
			fmt.Println("resultado e ", resultado)
			i = 1
		case "divisão", "Divisão", "DIVISÃO", "divisao", "Divisao", "DIVISAO", "/":
			resultado = divs(numUm, numDois)
			fmt.Println("resultado e ", resultado)
			i = 1
		default:
			fmt.Println("invalido, digite o nome da operação ou o simbolo\nEx.: soma ou +")
			fmt.Scan(&escolha)
		}
	}

}

/*
Desenvolva um programa que leia 3 notas de um aluno usando
fmt.Scan e calcule a média em uma função. Use estruturas if-else para
classificar: média >= 7.0 (Aprovado), >= 5.0 (Recuperação), < 5.0
(Reprovado). Exiba a média calculada e a situação do aluno.
*/

func questaoDois() {
	notaUm := 0
	notaDois := 0
	notaTres := 0
	resultado := 0

	fmt.Println("digite a nota um:")
	fmt.Scan(&notaUm)
	fmt.Println("digite a nota dois:")
	fmt.Scan(&notaDois)
	fmt.Println("digite a nota tres:")
	fmt.Scan(&notaTres)

	resultado = (notaUm + notaDois + notaTres) / 3

	if resultado >= 7 {
		fmt.Printf("media das notas: %d\nAPROVADO!", resultado)
	}
	if resultado >= 5 && resultado < 7 {
		fmt.Printf("media das notas: %d\nRECUPERAÇÃO!", resultado)
	}
	if resultado < 5 {
		fmt.Printf("media das notas: %d\nREPROVADO!", resultado)
	}
}

/*
Crie um programa que declare um array fixo de 5 números inteiros e
preencha-o com valores lidos do usuário usando um laço for.
Implemente funções separadas para: calcular a soma, encontrar o
maior número, e contar quantos são pares. Exiba todos os resultados e
os números digitados em ordem.
*/

func somar(n []int) int {
	resultado := 0
	for i := 0; i < len(n); i++ {
		resultado += n[i]
	}
	return resultado
}
func maiorNum(n []int) int {
	resultado := 0
	for i := 0; i < len(n); i++ {
		for j := 0; j < len(n); j++ {
			if n[i] > n[j] {
				resultado = n[i]
			}
		}
	}
	return resultado
}
func ordenar(n []int) {
	for i := 0; i < len(n); i++ {
		for j := i + 1; j < len(n); j++ {
			if n[i] > n[j] {
				n[i], n[j] = n[j], n[i]
			}
		}
	}

	fmt.Println("Lista ordenada:")
	for _, v := range n {
		fmt.Println(v)
	}
}

func questaoTres() {
	var numeros [5]int
	somatoria := 0
	maior := 0

	for i := 0; i < 5; i++ {
		fmt.Println("digite um numero:")
		fmt.Scan(&numeros[i])
	}
	somatoria = somar(numeros[:])
	maior = maiorNum(numeros[:])

	fmt.Printf("Soma total: %d\n", somatoria)
	fmt.Printf("o maior numero é: %d\n", maior)
	ordenar(numeros[:])
}

//MAIN

func main() {
	escolha := 0
	fmt.Println(
		"1 - Crie um programa que solicite ao usuario dois números e uma\n" +
			"operação (+, -, *, /). Use fmt.Scan para ler os valores e um switch para\n" +
			"determinar qual operação executar. Implemente cada operação\n" +
			"matemática em uma função separada e exiba o resultado formatado.\n\n")
	fmt.Println(
		"2 - Desenvolva um programa que leia 3 notas de um aluno usando\n" +
			"fmt.Scan e calcule a média em uma função. Use estruturas if-else para\n" +
			"classificar: média >= 7.0 (Aprovado), >= 5.0 (Recuperação), < 5.0\n" +
			"(Reprovado). Exiba a média calculada e a situação do aluno.\n\n")
	fmt.Println(
		"3 - Crie um programa que declare um array fixo de 5 números inteiros e\n" +
			"preencha-o com valores lidos do usuário usando um laço for.\n" +
			"Implemente funções separadas para: calcular a soma, encontrar o\n" +
			"maior número, e contar quantos são pares. Exiba todos os resultados e\n" +
			"os números digitados em ordem.\n\n")

	fmt.Println("escolha qual questão deseja validar (1 , 2 ou 3):")
	fmt.Scan(&escolha)

	for i := 0; i != 1; {
		switch escolha {
		case 1:
			questaoUm()
			i = 1
		case 2:
			questaoDois()
			i = 1
		case 3:
			questaoTres()
			i = 1
		default:
			fmt.Println("invalido, digite o numero da questão\nEx.: 1")
			fmt.Scan(&escolha)
		}
	}
	fmt.Println("\nFim do programa\nOBRIGADO!")
}
