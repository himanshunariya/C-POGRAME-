def remove_pairs(a):
    i = 0
    while i < len(a) - 1:
        if a[i] == 'a' and a[i + 1] == 'b':
            a.pop(i)
            a.pop(i)  
            i = max(0, i - 1)  
        else:
            i += 1
    return a
a= ['a', 'a', 'b', 'b', 'c', 'c']
a = remove_pairs(a)
print(a)
