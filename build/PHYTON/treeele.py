a = [1, 3, 2, 4, 7, 3, 4, 6, 7]
sum_value = 10

for i in range(len(a)):
    for j in range(i + 2, len(a)):
        for k in range(i + 1, len(a)):
            if (a[i] + a[j] + a[k]) == sum_value:
                print(a[i])
                print(a[j])
                print(a[k])
