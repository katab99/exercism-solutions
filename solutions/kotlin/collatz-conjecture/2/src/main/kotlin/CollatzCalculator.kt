object CollatzCalculator {
    fun computeStepCount(start: Int): Int {
        if(start <= 0) throw IllegalArgumentException()

        if(start == 1) return 0

        return if(start % 2 == 0) {
            computeStepCount(start / 2) + 1
        } else {
            computeStepCount(start * 3 + 1) + 1
        }

    }
}
