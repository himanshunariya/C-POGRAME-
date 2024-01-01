# Given array
a = [1, 2, 8, 9, 11, 13, 15, 28]

# Find the first greater element of 6
first_greater_of_6 = next(x for x in a if x > 6)
print("1.First greater element of 6:", first_greater_of_6)

# Find the first greater element of 11
first_greater_of_11 = next(x for x in a if x > 11)
print("2.First greater element of 11:", first_greater_of_11)

# Find the index of 13
index_of_13 = a.index(13)
print("3.Index of 13:", index_of_13)

# Find the length of the array
length_of_array = len(a)
print("4.Length of the array:", length_of_array)

# Find the first smaller element of 9
first_smaller_of_9 = next(x for x in a if x < 9)
print("5.First smaller element of 9:", first_smaller_of_9)

# Find the first smaller element of 28
first_smaller_of_28 = next(x for x in a if x < 28)
print("6.First smaller element of 28:", first_smaller_of_28)

# Find the average of the given array
average_of_array = sum(a) / len(a)
print("7.Average of the array:", average_of_array)

# Print a, b, or c based on divisibility
for element in a:
    if element % 3 == 0 and element % 5 == 0:
        print("c")
    elif element % 3 == 0:
        print("a")
    elif element % 5 == 0:
        print("b")

# Print elements greater than 5
print("9.Elements greater than 5:", [x for x in a if x > 5])

# Print pairs whose sum is 20
print("10.Pairs whose sum is 20:", [(x, y) for x in a for y in a if x + y == 20])

# Count elements greater than 10
count_greater_than_10 = sum(1 for x in a if x > 10)
print("11.Number of elements greater than 10:", count_greater_than_10)

# Count elements smaller than 9
count_smaller_than_9 = sum(1 for x in a if x < 9)
print("12. of elements smaller than 9:", count_smaller_than_9)

# Check if the given string is a palindrome or not
given_string = "madam"
is_palindrome = given_string == given_string[::-1]
print("13.Is the given string a palindrome:", is_palindrome)

# Print the reverse string of 'abc'
reverse_string = 'abc'[::-1]
print("14.Reverse of 'abc':", reverse_string)

# Print the reverse of the number 1234
reverse_number = int(str(1234)[::-1])
print("15.Reverse of the number 1234:", reverse_number)

# Check if the number 12121 is a palindrome or not
number = 12121
number_palindrome = str(number) == str(number)[::-1]
print("16.Is the number " + str(number) + " a palindrome: " + str(number_palindrome))

