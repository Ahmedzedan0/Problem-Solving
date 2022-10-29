class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
            #import math
        l, r = 1, max(piles) # left and right pointers to binary search
        k = 0 
        while l <= r : # binary search Condition
            m = (l+r) // 2 # middle guess
            hours = 0 
            for bananes in piles:
                hours += ( (bananes-1) // m  ) + 1 # we want to round the output up Ex: 3.2 >>>> we want to get: 4
                                                   # 3.6 >>>> 4 
                                                   # but what if the output is integer Ex: 3 >>>> we want to get: 3 ??
                                                   # well, we subtract one to elemenate the added one. 

                #---------------------------------------------------------------------------------------------------
                #hours += math.ceil((bananes) / m) # you can just use Ceil function or implement it : # 
                # if a % b == 0:
                #     return (a/b)
                # else:
                #     return (a//b + 1)
                #-----------------------------------------------------------------------------------------------------
            #print(hours)
            if hours <= h : # Can we do more optimazation ?
                k = m 
                r = m - 1  # lets try if there a smaller value without breaking our condition that , hours <= h
            else:
                l = m + 1 
        return k