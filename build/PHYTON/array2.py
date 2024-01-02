a = [1,8,1,3,5,6,2,1,6,3,3,9,10]
#1.creat dictonary of frequency from given array ?
freq_dict = {}
for eleme in a:
    if eleme in freq_dict:
        freq_dict[eleme] += 1
    else:
        freq_dict[eleme] = 1
print(freq_dict)
#output is 
#{1: 3, 8: 1, 3: 3, 5: 1, 6: 2, 2: 1, 9: 1, 10: 1}
print("-----------------------------------------------------------------------")

#2.sort dictonary of frequency by key ? 
freq_dict = {}
for eleme in a:
    if eleme in freq_dict:
        freq_dict[eleme] += 1
    else:
        freq_dict[eleme] = 1
sorted_freq_dict = dict(sorted(freq_dict.items()))
print(sorted_freq_dict)
# output is 
#{1: 3, 2: 1, 3: 3, 5: 1, 6: 2, 8: 1, 9: 1, 10: 1}
print("-----------------------------------------------------------------------")

#3.get maximum frequency from dictionary?
frequency_dict = {}
for eleme in a:
    if eleme in frequency_dict:
        frequency_dict[eleme] += 1
    else:
        frequency_dict[eleme] = 1
max_frequency = max(frequency_dict.values())
print("Maximum Frequency is :", max_frequency)
# output is 
#Maximum Frequency is : 3
print("-----------------------------------------------------------------------")

#4.print the element with maximum frequency ? 
freq_dict = {}
for eleme in a:
    if eleme in freq_dict:
        freq_dict[eleme] += 1
    else:
        freq_dict[eleme] = 1
max_freq = max(freq_dict.values())
eleme_with_max_freq = [key for key, value in freq_dict.items() if value == max_freq]
print("Element with Maximum Frequency is :", eleme_with_max_freq)
#output is 
#Element with Maximum Frequency is : [1, 3]
print("-----------------------------------------------------------------------")

#5.print the element with minimum frequency ?
freq_dict = {}
for eleme in a:
    if eleme in freq_dict:
        freq_dict[eleme] += 1
    else:
        freq_dict[eleme] = 1
min_freq = min(freq_dict.values())
eleme_with_min_freq = [key for key, value in freq_dict.items() if value == min_freq]
print("Element with Minimum Frequency is :", eleme_with_min_freq)
#output is 
#Element with Minimum Frequency is : [8, 5, 2, 9, 10]
print("-----------------------------------------------------------------------")

#6.print the element with frequency 2 ?
freq_dict = {}
for eleme in a:
    if eleme in freq_dict:
        freq_dict[eleme] += 1
    else:
        freq_dict[eleme] = 1
freq_to_find = 2
eleme_with_freq_two = [key for key, value in freq_dict.items() if value == freq_to_find]
print(f"Element with Frequency is  {freq_to_find}:", eleme_with_freq_two)
#output is 
#Element with Frequency is  2: [6]
print("-----------------------------------------------------------------------")

#7.chake if there is any element with frequency 2 ?
# is same qustion no 6?

#8.sort dictionary based on frequency ?
freq_dict = {}
for eleme in a:
    if eleme in freq_dict:
        freq_dict[eleme] += 1
    else:
        freq_dict[eleme] = 1
sorted_freq_dict = dict(sorted(freq_dict.items(), key=lambda item: item[1], reverse=True))
print("Sorted Dictionary based on Frequency is :\n", sorted_freq_dict)
# output is 
#Sorted Dictionary based on Frequency is :
#{1: 3, 3: 3, 6: 2, 8: 1, 5: 1, 2: 1, 9: 1, 10: 1}
print("-----------------------------------------------------------------------")

#9.find total sum of all elements from array ?
total_sum = sum(a)
print("Total Sum of Elements is :", total_sum)
#output is 
#Total Sum of Elements is : 58
print("-----------------------------------------------------------------------")

#10.find total product of all elements from array ?
total_prod = 1
for eleme in a:
    total_prod *= eleme
print("Total Product of Elements is :", total_prod)
#output is 
#Total Product of Elements is : 6998400
print("-----------------------------------------------------------------------")







