object Darts {

    fun score(x: Double, y: Double): Int {
        val landingPoint = x * x + y * y

        return when {
            100 >= landingPoint && landingPoint > 25 -> 1
            25 >= landingPoint && landingPoint > 1  -> 5
            1 >= landingPoint -> 10
            else -> 0
        }
    }

    fun score(x: Int, y: Int): Int = score(x.toDouble(), y.toDouble())
    fun score(x: Int, y: Double): Int = score(x.toDouble(), y)
    fun score(x: Double, y: Int): Int = score(x, y.toDouble())
}
