class Solution:
    def findMaxConsecutiveOnes(self, nums: list[int]) -> int:
        new = [0]*len(nums)
        curr=0
        for i in nums:
            if i == 1:
                new[curr]+=1
            else:
                curr+=1
        return max(new)