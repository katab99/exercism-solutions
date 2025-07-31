def value_of_card(card):
    if card == 'K' or card == 'Q' or card == 'J':
        return 10
    elif card == 'A':
        return 1
    else:
        return int(card)
    

def higher_card(card_one, card_two):
    a = value_of_card(card_one)
    b = value_of_card(card_two)

    if a == b:
        return card_one, card_two
    elif a > b:
        return card_one
    else:
        return card_two


def value_of_ace(card_one, card_two):
    """Calculate the most advantageous value for the ace card.

    :param card_one, card_two: str - card dealt. See below for values.
    :return: int - either 1 or 11 value of the upcoming ace card.

    1.  'J', 'Q', or 'K' (otherwise known as "face cards") = 10
    2.  'A' (ace card) = 11 (if already in hand)
    3.  '2' - '10' = numerical value.
    """

    card1 = value_of_card(card_one)
    card2 = value_of_card(card_two)

    if card_one == 'A':
        card1 = 11
    elif card_two == 'A':
        card2 = 11

    sum = card1 + card2

    if sum + 11 > 21:
        return 1
    else:
        return 11



def is_blackjack(card_one, card_two):

    card1 = value_of_card(card_one)
    card2 = value_of_card(card_two)
    
    if card_one == 'A':
        card1 = 11
    elif card_two == 'A':
        card2 = 11

    if card1 + card2 == 21:
        return True
    else:
        return False


def can_split_pairs(card_one, card_two):
    
    if card_one == card_two:
        return True
    elif card_one =='K' and card_two == 'Q':
        return True
    elif card_one =='Q' and card_two == 'K':
        return True
    else: 
        return False

def can_double_down(card_one, card_two):

    card1 = value_of_card(card_one)
    card2 = value_of_card(card_two)

    sum = card1 + card2

    if sum == 9 or sum == 10 or sum == 11:
        return True
    
    return False