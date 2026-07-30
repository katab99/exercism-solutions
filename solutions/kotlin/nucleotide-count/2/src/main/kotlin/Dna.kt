class Dna(val input: String) {
    init {
        for(char in input) {
            if(char !in listOf('A', 'C', 'G', 'T')) {
                throw IllegalArgumentException("$char is not a DNA element.") }
        }
    }


    var dnaMap: MutableMap<Char, Int> = mutableMapOf('A' to 0, 'C' to 0, 'G' to 0, 'T' to 0)

    val nucleotideCounts: Map<Char, Int>
        get() {
            input.map{ char -> dnaMap.computeIfPresent(char) { _, v -> v + 1 } }
            return dnaMap
        }
}
