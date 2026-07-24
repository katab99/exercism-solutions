import java.math.BigInteger
import kotlin.math.pow


object Board {

    fun getGrainCountForSquare(number: Int): BigInteger {
        if(number !in 1..64) throw IllegalArgumentException("Number must be in range 1..64")

        return BigInteger.TWO.pow(number - 1)
    }

    fun getTotalGrainCount(): BigInteger {
        return BigInteger.TWO.pow(64) - BigInteger.ONE
    }
}
