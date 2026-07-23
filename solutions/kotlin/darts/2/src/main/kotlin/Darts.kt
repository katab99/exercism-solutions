import kotlin.math.hypot

object Darts {

    fun score(x: Number, y: Number): Int {
        val landingPoint = hypot(x.toDouble(), y.toDouble())

        return when {
            1 >= landingPoint -> 10
            5 >= landingPoint -> 5
            10 >= landingPoint -> 1
            else -> 0
        }
    }

}
