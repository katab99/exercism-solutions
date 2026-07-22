object CollatzCalculator {
    fun computeStepCount(start: Int): Int {
        return when{
            start <= 0 -> throw IllegalArgumentException()
            start == 1 -> 0
            start % 2 == 0 -> computeStepCount(start / 2) + 1
            else -> computeStepCount(start * 3 + 1) + 1
        }

    }
}
