class Solution:
    def romanToInt(self, s: str) -> int:
        class Solution:
            roman_dict = {'I': 1, 'V': 5, 'X': 10, 'L': 50,
                      'C': 100, 'D': 500, 'M': 1000}
        
        result = 0
        prev_value = 0
        
        for symbol in s:
                 current_value = roman_dict[symbol]
            
        if current_value > prev_value:
             result += current_value - 2 * prev_value
        else:
             result += current_value
            
        prev_value = current_value
        
        return result

# Example usage:
roman_str1 = "III"
solution = Solution()
print(solution.romanToInt(roman_str1))  # Output: 3

roman_str2 = "LVIII"
print(solution.romanToInt(roman_str2))  # Output: 58

roman_str3 = "MCMXCIV"
print(solution.romanToInt(roman_str3))  # Output: 1994

        