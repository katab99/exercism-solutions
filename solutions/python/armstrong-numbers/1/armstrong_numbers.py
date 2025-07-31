def is_armstrong_number(number):
    digits: list = []
    temp_num: int = number

    while temp_num > 0:
        digit = temp_num % 10
        digits.append(digit)
        temp_num = temp_num // 10

    digits_num: int = len(digits)
    digits_sum: int = 0

    for num in digits:
        digits_sum += num ** digits_num

    return number == digits_sum
