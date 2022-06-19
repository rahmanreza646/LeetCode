class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        len_row=len(matrix)
        len_col=len(matrix[0])
        low=0
        high=(len_row*len_col)-1
        while(low<=high):
            mid=(low+high)//2
            midpoint=matrix[mid//len_col][mid%len_col]
            if target==midpoint:
                return True
            elif target<midpoint:
                high=mid-1
            else:
                low=mid+1
        return False
