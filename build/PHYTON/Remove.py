string=input('enter string = ')
target=input('which pattern you replace or remove =')
result = string.replace(target, '')
while result != string:
    string = result
    result = result.replace(target, '')
print('new string = ',result)





















# 1. get input one string

# 2. get target

# 3. replace the charector you target

# 4. check one by one element if result no in string

# 5. last print final result