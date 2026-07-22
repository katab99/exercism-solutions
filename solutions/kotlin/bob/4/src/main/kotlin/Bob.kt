object Bob {
    fun hey(input: String): String {
        val trimmed = input.trim()

        val isQuestion: Boolean = trimmed.endsWith('?')
        val hasLetter: Boolean = trimmed.any { c -> c in 'a'..'z'  || c in 'A'..'Z' }
        val isYelling: Boolean = hasLetter && trimmed == trimmed.uppercase()

        return when {
            trimmed.isBlank() -> "Fine. Be that way!"
            isQuestion && isYelling -> "Calm down, I know what I'm doing!"
            isQuestion -> "Sure."
            isYelling -> "Whoa, chill out!"
            else -> "Whatever."
        }

    }
}
