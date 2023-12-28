a = [1, 3, 5, 3, 2, 7, 9, 3, 11, 5, 25, 3, 8]

# Print the array
print("---------------------------------------------------------------------------------------")
print("Array:", a)
print("---------------------------------------------------------------------------------------")

# Print the length of the array
print("Array length:", len(a))
print("---------------------------------------------------------------------------------------")

# Print the 6th element if the length is greater than 6
if len(a) > 6:
    print("6th element:", a[5])
    print("---------------------------------------------------------------------------------------")

# Check if the value 50 is present in the array
if 50 in a:
    print("Position of value 50:", a.index(50))
else:
    print("Value 50 is not present in the array.")
    print("---------------------------------------------------------------------------------------")

# Check if the value 60 is present in the array
if 60 in a:
    print("Value 60 is present in the array.")
else:
    print("Value 60 is not present in the array.")
    print("---------------------------------------------------------------------------------------")

# Print the minimum element (smallest)
print("Minimum element:", min(a))
print("---------------------------------------------------------------------------------------")

# Print the maximum element (largest)
print("Maximum element:", max(a))
print("---------------------------------------------------------------------------------------")

# Define an array with integers
int_array = [1, 2, 3, 4, 5]
print("Array with integers:", int_array)  
print("---------------------------------------------------------------------------------------")

# Define an array with string values
string_array = ["apple", "banana", "cherry"]
print("String array:", string_array)
print("---------------------------------------------------------------------------------------")

# Print the first element of the array
print("First element:", a[0])
print("---------------------------------------------------------------------------------------")

# Print the last element of the array
print("Last element:", a[-1])
print("---------------------------------------------------------------------------------------")

# Print the middle element of the array
middle_index = len(a) // 2
print("Middle element:", a[middle_index])
print("---------------------------------------------------------------------------------------")

# Print the sum of the first and last elements
sum_first_last = a[0] + a[-1]
print("Sum of first and last elements:", sum_first_last)
print("---------------------------------------------------------------------------------------")

# Print the smaller element of the first and last elements
smaller_element = min(a[0], a[-1])
print("Smaller element of first and last:", smaller_element)
print("---------------------------------------------------------------------------------------")

# Print the frequency of each element in the array
frequency_dict = {}
for num in a:
    frequency_dict[num] = frequency_dict.get(num, 0) + 1
print("Frequency of each element:", frequency_dict)
print("---------------------------------------------------------------------------------------")

# Print every other element, excluding the last element
print("Every other element, excluding the last one:", a[::2])
print("---------------------------------------------------------------------------------------")

# Find the frequency of the value 3 using the count method
frequency_of_3 = a.count(3)
print("Frequency of 3 using count method:", frequency_of_3)
print("---------------------------------------------------------------------------------------")
