object CollatzCalculator {
    fun computeStepCount(start: Int): Int {
        if(start <= 0) throw IllegalArgumentException()

        var steps = 0
        var num = start

        while (num != 1) {
            if(num % 2 == 0){
                num /= 2
            } else {
                num = num * 3 + 1
            }
            steps++
        }

        return steps
    }
}
