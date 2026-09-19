import kotlin.math.cos
import kotlin.math.sin
import kotlin.math.PI


class Ponto2D {
    var x : Double
    var y : Double


    constructor(x : Double, y : Double) {
        this.x = x
        this.y = y
    }


    fun rotacionar(anguloGraus : Double) : Ponto2D {
        val radianos = anguloGraus * (PI / 180.0)


        // x' = x * cos(θ) - y * sin(θ)
        // y' = x * sin(θ) + y * cos(θ)
        val xLinha = x * cos(radianos) - y * sin(radianos)
        val yLinha = x * sin(radianos) + y * cos(radianos)


        return Ponto2D(xLinha, yLinha)
    }


    override fun toString(): String {
        return String.format("(%.2f, %.2f)", x, y)
    }




}
