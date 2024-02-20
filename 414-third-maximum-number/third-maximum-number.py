class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        a=list(set(nums))
        a.sort()
        if len(a)<3: return(max(a))
        
        return(a[-3])