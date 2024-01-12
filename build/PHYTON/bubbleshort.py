def bubbleSort(arr):
	n = len(arr)
	for i in range(n):
		swapped = False
		for j in range(0, n-i-1):
			if arr[j] > arr[j+1]:
				arr[j], arr[j+1] = arr[j+1], arr[j]
				swapped = True
		if (swapped == False):
			break
if __name__ == "__main__":
	arr =  [4,6,1,7,9,2,8,5,3]

	bubbleSort(arr)

	print("Sorted array:")
	for i in range(len(arr)):
		print("%d" % arr[i], end=" ")
