a = [1, 3, 5, 8]
b = [1, 4]
ans = []
i = 0
j = 0
while i < len(a) and j < len(b):
    if a[i] >= b[j]:
        ans.append(a[i])
        i += 1
    elif a[i] <= b[j]: 
        ans.append(b[j])
        j += 1
while i < len(a):
    ans.append(a[i])
    i += 1
while j < len(b):
    ans.append(b[j])
    j += 1
print("->This ia a")
print(a)
print("->This ia b")
print(b)
print("->This is mrg")
print(ans)
