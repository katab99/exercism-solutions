class Dna(val input: String) {
    companion object {
        private const val DNA_ACIDS = "ACGT"
    }

    private val initDna = DNA_ACIDS.map { it to 0 }.toMap()

    init {
        require(input.all { it in DNA_ACIDS })
    }


    val nucleotideCounts: Map<Char, Int>
        get() = initDna + input.groupBy { it }.mapValues { (_, v) -> v.count() }
}

