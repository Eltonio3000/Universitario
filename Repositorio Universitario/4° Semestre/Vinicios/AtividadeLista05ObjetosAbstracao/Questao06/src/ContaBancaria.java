public interface ContaBancaria {
    void depositar(double valor);
    void sacar(double valor);
    void verificarSaldo();
    void transferir(Conta destino, double valor);
}
