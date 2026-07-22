object Bob {
    fun hey(input: String): String {
        val trimmed = input.trim()

        if (trimmed.isBlank()) return "Fine. Be that way!"

        val isQuestion: Boolean = trimmed.endsWith('?')
        val hasLetter: Boolean = input.any { c -> c in 'a'..'z'  || c in 'A'..'Z' }
        val isYelling: Boolean = hasLetter && trimmed == trimmed.uppercase()

        return when {
            isQuestion && isYelling -> "Calm down, I know what I'm doing!"
            isQuestion -> "Sure."
            isYelling -> "Whoa, chill out!"
            else -> "Whatever."
        }

    }
}
