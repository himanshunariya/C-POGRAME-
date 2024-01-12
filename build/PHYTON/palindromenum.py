 
number = 12121
temp = number
reverse = 0

while number > 0:
    dig = number % 10
    reverse = reverse * 10 + dig
    number = number // 10

if temp == reverse:
    print("Number is a palindrome number")
else:
    print("Number is not a palindrome number")
      

      
