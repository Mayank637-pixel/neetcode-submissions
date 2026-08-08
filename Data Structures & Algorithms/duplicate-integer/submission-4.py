class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        tuple1=set(nums)
        if(len(nums)==len(tuple1)):
            return False
        else:
            return True               
                                