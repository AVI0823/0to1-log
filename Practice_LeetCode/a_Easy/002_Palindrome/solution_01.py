class Solution:
    def isPalindrome(self, x: int) -> bool:
        if (str(x)[:] == str(x)[::-1]):
            return True
        return False
    
# sol = Solution()
# result = sol.isPalindrome(131)
# print(result)
