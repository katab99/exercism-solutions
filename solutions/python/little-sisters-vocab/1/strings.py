def add_prefix_un(word):
   return 'un' + word


    
def make_word_groups(vocab_words):
    prefix = vocab_words[0]
    pre_list = [prefix]
    
    for word in vocab_words[1:]:
        pre_list.append(prefix + word)
        
    return " :: ".join(pre_list)
    

def remove_suffix_ness(word):
    removed = word[:-4]
    
    if removed[-1] == 'i':
        removed = removed.replace('i', 'y')
    
    return removed


def adjective_to_verb(sentence, index):
    """Change the adjective within the sentence to a verb.

    :param sentence: str - that uses the word in sentence.
    :param index: int - index of the word to remove and transform.
    :return: str - word that changes the extracted adjective to a verb.

    For example, ("It got dark as the sun set", 2) becomes "darken".
    """

    
    word_lst = sentence.split(' ')
    print(word_lst[index])

    if word_lst[index][-1] == '.':
        return f'{word_lst[index][:-1]}en'
    else:
        return f'{word_lst[index]}en'
    
