class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        '''
        • Finds targeted value in a sorted 2-d array
        • Integers in each row are sorted from left to right.
        • The first integer of each row is greater than the last integer of the previous row.
        • complexity of O(log(n) + log (m)) where m & n is the matrix dimensions 
        '''
        rows, columns = len(matrix), len(
            matrix[0])  # len(matrix) is vertical length
        # len(matrix[0]) is horizontal width
        top, bottom = 0, rows - 1  # index

        while top <= bottom:
            row = (top + bottom) // 2
            if target > matrix[row][-1]:      # right most bit comparison
                top = row + 1

            elif target < matrix[row][0]:    # left most bit comparison
                bottom = row - 1
            else:
                break

        if not (top <= bottom):    # we now in a row that our value is less or equal than the right most bit
            # and lower than the left most bit
            return False

        # ordinary binary search implementation
        l, r = 0, columns - 1  # l: low(left), r: right(high)
        row = (top + bottom) // 2
        while l <= r:
            # to prevent overflow we can use: mid = low + (high - low ) // 2
            mid = (l + r) // 2
            # guess = matrix[row][mid]
            if (target > matrix[row][mid]):
                l = mid + 1

            elif (target < matrix[row][mid]):
                r = mid - 1
            else:
                return True
        return False
