object EliudsEggs {

    fun eggCount(number: Int): Int{
        var leftover = number
        var score = 0

        while(leftover != 0){
            if(leftover % 2 == 1){
                score++
            }

            leftover /= 2
        }

        return score
    }
}
