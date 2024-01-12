def sortedMerge(a, b, res, n, m): 
	a.sort() 
	b.sort() 
	i, j, k = 0, 0, 0
	while (i < n and j < m): 
		if (a[i] <= b[j]): 
			res[k] = a[i] 
			i += 1
			k += 1
		else: 
			res[k] = b[j] 
			j += 1
			k += 1
	while (i < n): 
		res[k] = a[i] 
		i += 1
		k += 1
	while (j < m): 
		res[k] = b[j] 
		j += 1
		k += 1
a = [2,4,6,1,6,7,9,5,2,9,8,5]
b = [10,13,3,11,14,12,16,17,18]
n = len(a) 
m = len(b) 
res = [0 for i in range(n + m)] 
sortedMerge(a, b, res, n, m) 
print ("Sorted merged list :") 
for i in range(n + m): 
	print(res[i],end=" ")  
