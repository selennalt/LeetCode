class Solution(object):
    def maximumCount(self, nums):

        temp1=0
        temp2=0

        for i in range(0,len(nums)):
            if nums[i]<0:
                temp1+=1
            elif nums[i]>0:
                temp2+=1

        if(temp1>temp2):
            return temp1
        else:
            return temp2
