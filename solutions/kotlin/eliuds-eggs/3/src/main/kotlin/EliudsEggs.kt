object EliudsEggs {

    fun eggCount(number: Int): Int{
        return when{
            number == 0 -> 0
            number.rem(2) == 1 -> eggCount(number / 2) + 1
            else -> eggCount(number / 2)
        }

    }
}
