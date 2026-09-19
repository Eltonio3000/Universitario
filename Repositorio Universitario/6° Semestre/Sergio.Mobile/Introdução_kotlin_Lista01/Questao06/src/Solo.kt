import java.awt.geom.Area
import kotlin.coroutines.coroutineContext

class Solo {
    public var identificacao : String ="";
    public var areia : Double = -1.0;
    public var silte : Double = -1.0;
    public var argila : Double = -1.0;

    init {
        if(!this.validarTetura()){
            println("Textura Invalida")
        }
    }

    constructor(identificacao : String, areia : Double, silte : Double, argila : Double) {
        this.identificacao = identificacao;
        this.areia = areia;
        this.silte = silte;
        this.argila = argila;
    }

    fun validarTetura() : Boolean{
        return (this.argila+this.silte+this.areia) == 1.0;
    }

    fun calcularFitnes() : Double {
        return ((1.5 * this.argila) + (0.8 * this.silte) - (0.5 * this.areia))
    }

    fun obterClassificacao() : String {
        val fitness = calcularFitnes();
        if(fitness<=0.4){
            return "Inadequado";
        }else if(fitness<=0.6){
            return "MOderada";
        }else{
            return "Excelente";
        }
    }

    fun compararAptidao(outrosolo : Solo) : Solo{
        if(this.calcularFitnes() >= outrosolo.calcularFitnes()){
            return this;
        }else{
            return outrosolo;
        }
    }

    fun formararCompararAptidao(outrosolo: Solo){
        println("""
            ===============================
            resultado
        """.trimIndent())
    }

    override fun toString(): String {

        return """--- Relatório de Solo --- 
            |${this.identificacao}% 
            |${this.areia * 100}
            |${this.argila * 100}
            |${this.silte * 100}
            |${obterClassificacao()}--- """.trimMargin()
    }

}