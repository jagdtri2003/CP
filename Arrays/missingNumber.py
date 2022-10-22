# Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

class Solution:
    def MissingNumber(self,array,n):
        # code here
        array.sort()
        for i in range(0,n-1):
            if array[i] != i+1:
                return i+1
        else:
            return i+2