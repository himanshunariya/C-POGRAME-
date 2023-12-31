# Assuming 'a' is the array
a = [1, 3, 5, 3, 7, 5, 3, 9, 5]

# Initialize frequency_dict
frequency_dict = {}

num1 = 3
num2 = 5

# Count frequencies
count_num1 = 0
count_num2 = 0

for i in range(0, len(a)):
    if a[i] == num1:
        count_num1 += 1
    if a[i] == num2:
        count_num2 += 1

# Update frequency_dict
frequency_dict[num1] = count_num1
frequency_dict[num2] = count_num2

# Print the frequencies
for num, count in frequency_dict.items():
    print('Frequency of', num, 'is:', count)
