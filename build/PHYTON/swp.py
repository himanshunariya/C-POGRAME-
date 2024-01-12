a = [1,6,4,7,9,2,4,5,6,8,3]
for i in range(0, len(a)):
    for j in range(i+1, len(a)):
        if a[i] > a[j]:
            temp = a[i] 
            a[i] = a[j]
            a[j] = temp
print(a)
#---------------------------------------------
a = [1,6,4,7,9,2,4,5,6,8,3]
for i in range(0, len(a)):
    for j in range(i+1, len(a)):
        if a[i] < a[j]:
            temp = a[i] 
            a[i] = a[j]
            a[j] = temp
print(a)
#-----------------------------------------------
a = [1,6,4,7,9,2,4,5,6,8,3]
for i in range(0,4):
    for j in range(i+1, len(a)):
        if a[i] > a[j]:
            temp = a[i] 
            a[i] = a[j]
            a[j] = temp
print(a)