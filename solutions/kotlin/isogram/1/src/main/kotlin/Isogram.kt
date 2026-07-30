object Isogram {

    fun isIsogram(input: String): Boolean {
        val lowerCaseInput = input.lowercase()
        val letters = mutableListOf<Char>()

        for (char in lowerCaseInput) {
            if (char.isLetter()) {
                if (char in letters) {
                    return false
                } else {
                    letters.add(char)
                }
            }
        }

        return true
    }
}
