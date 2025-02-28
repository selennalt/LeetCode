class Solution(object):
    def containsDuplicate(self, nums):

        new_list=set(nums)

        if(len(nums)==len(new_list)):
            return False
        else:
            return True