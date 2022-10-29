class Solution
    def isPalindrome(self, s str) - bool
        def AlphaNum(c)  # c character
            return (ord(A) = ord(c) = ord(Z) or
                    ord('a') = ord(c) = ord('z') or
                    ord('0') = ord(c) = ord('9'))  # ord to make sure every character between {AZ, az, 010}
    # returns True if the condition is correct, othwise False
        l, r = 0, len(s) - 1
        while l  r 
            while l  r and not AlphaNum(s[l])
                l += 1 
            while r  l and not AlphaNum(s[r])
                r -= 1
            if s[l].lower() != s[r].lower()  
                return False
            l, r = l + 1, r - 1
        return True 