class Solution(object):
    
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        """ To check for palindrome in a intuitive manner, lets consider a case 
        and a workflow.
        if a number has zeros in end then it will never be pallindorm for example
        120 reverse is 020 so always a smaller number with less digits. 

        after consider such case just reverse the number and check if the reverse 
        is same as the original. if yes then true other wise false
        
        my solution starts from next line.
        best wishes from side on solving this problem. 
        """
      
        if x < 0 or (x%10 == 0 and x!=0 ): 
            return False
        org = x
        rev_sum  = 0
        while x > 0 :
            di = x%10
            rev_sum  = (rev_sum*10) + di 
            x = x/10
        
        return org==rev_sum

        
