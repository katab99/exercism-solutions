def convert(number):
    # return a string
    # 3 -> "Plong"
    # 5 -> "Plang"
    # 7 -> "Plong"
    # none of them -> int stringyfied
    res = ""

    if number % 3 == 0:
        res += "Pling"

    if number % 5 == 0:
        res += "Plang"

    if number % 7 == 0:
        res += "Plong"

    if res == "":
        return str(number)
    
    return res
