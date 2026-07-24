object ETL {
    fun transform(source: Map<Int, Collection<Char>>): Map<Char, Int> {
       val mutableMap = mutableMapOf<Char, Int>()

        for((key, value ) in source) {
            for(c in value) {
                mutableMap[c.lowercaseChar()] = key
            }

        }

        return mutableMap.toMap()
    }
}
