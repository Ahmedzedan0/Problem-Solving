class Solution:
    def search(self, nums: List[int], target: int) -> int:
        '''
        • A function to search on a rotated sorted array 
        • It takes two arguments, nums:array of numbers & target: target value 
        • O(log n)
        • Returns target value or -1 if the value not in the array
        '''
        # knowing the pivot(inflection) point(s) doesn't matter , we want to apply binary search in any set of numbers that increase from left          to right
        # so every try we would ask that , are we going from left to right ?

        # outside the loop because we don't want to change their values
        l, r = 0, len(nums) - 1
        while l <= r:
            mid = (l+r) // 2
            if target == nums[mid]:
                return mid

            if nums[l] <= nums[mid]:  # Left sorted portion , the values increase as we go from left to right we insure that we are in a sorted           array
                # apply binary search on the left sorted array
                # we insure that we are in left sorted array as the target between these two values
                if nums[l] <= target <= nums[mid]:
                    # ordinary binary search conditions
                    r = mid - 1
                else:
                    l = mid + 1

            else:  # the values
                # we insure that we are in right sorted array as the target between these two values
                if nums[mid] <= target <= nums[r]:
                    # oridinary binary search conditions
                    l = mid + 1
                else:  # target < nums[mid]
                    r = mid - 1
        return -1
