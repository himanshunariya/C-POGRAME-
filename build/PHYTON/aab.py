def aab_pairs():
    pairs = []
    for char1 in 'ab':
         for char2 in 'ab':
            for char3 in 'ab': 
                pair = char1 + char2 + char3
         pairs.append(pair)
    print("Generated 'aab' pairs:")
    print(pair)
aab_pairs()
 


