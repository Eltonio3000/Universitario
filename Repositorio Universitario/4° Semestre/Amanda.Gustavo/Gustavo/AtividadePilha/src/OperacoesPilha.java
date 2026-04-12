import java.util.Stack;

public class OperacoesPilha {
    public static void executarExercicio2() {
    Stack<Integer> pilha = new Stack<>();
    pilha.push(3);
    pilha.push(1);
    pilha.push(5);
    pilha.push(7);
    pilha.pop();
    pilha.push(10);
    pilha.pop();
    pilha.pop();
    pilha.push(20);
    pilha.push(4);
    pilha.pop();
    pilha.push(1);
    pilha.push(50);

    System.out.println("\nExercício 2 - Pilha final: " + pilha);
}

    public static void executarExercicio3() {
        Stack<Integer> pilha = new Stack<>();
        pilha.push(5);
        pilha.push(3);
        pilha.pop();
        pilha.push(2);
        pilha.push(8);
        pilha.pop();
        pilha.pop();
        pilha.push(9);
        pilha.push(1);
        pilha.pop();
        pilha.push(7);
        pilha.push(6);
        pilha.pop();
        pilha.pop();
        pilha.push(4);
        pilha.pop();
        pilha.pop();

        System.out.println("\nExercício 3 - Pilha final: " + pilha);
    }
}
