class Solution(object):
    def removeDuplicates(self, nums):
        uniqueElements = sorted(set(nums)) 
        k = len(uniqueElements)
        for i in range(k):  
            nums[i] = uniqueElements[i]
        return k
