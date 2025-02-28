class Solution(object):
    def plusOne(self, digits):

        sum=0
        list=[]
        
        for i in range(0,len(digits)):
           sum=sum+digits[len(digits)-1-i]*(10**i)
        
        sum+=1


        while(sum>0):
            list.append(sum%10)
            sum=sum//10
    
        list.reverse()
        return list
        