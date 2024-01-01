def is_palindrome(x):
    
    if x < 0 or (x % 10 == 0 and x != 0):
        return False
    
    reversed_half = 0
    while x > reversed_half:
        reversed_half = reversed_half * 10 + x % 10
        x //= 10

    return x == reversed_half or x == reversed_half // 10

print("----------") 
print(is_palindrome(121))  
print("----------") 
print(is_palindrome(-121)) 
print("----------") 
print(is_palindrome(10))   
print("----------")  
#number = int(input())
#temp = number
#reverse = 0

#while number > 0:
    #dig = number % 10
    #reverse = reverse * 10 + dig
    #number = number // 10

#if temp == reverse:
    #print("Number is a palindrome number")
#else:
    #print("Number is not a palindrome number")
