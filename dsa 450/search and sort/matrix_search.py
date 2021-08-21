class Solution:
    def searchMatrix(self, m: List[List[int]], target: int) -> bool:
        row=len(m) # len of rows
        col=len(m[0]) #len of coloumns
        lo =0
        hi=(row*col)-1 #0 based indexing 
        
        while(lo<=hi):
            mid=(lo+hi)//2
            if m[mid//col][mid%col]==target: #mid//j gives row and mid/%j gives coloumn
                return True
            elif m[mid//col][mid%col]<target:
                lo=mid+1
            else:
                hi=mid-1
        return False

# check if the first element of column exceeds the last element of the row