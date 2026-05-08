class Solution(object):
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        """ In number theory, we use this concept of modular arithmetic or mod of a number. mod is nothing but remainder or the modulo function in programming.

        this particular problem can be solved essentially by mod. 

        I'll state an example of mod of a number.

        ex: 13 mod(8) = 5. explaination: when you divide 13 by 8 it leaves a remainder of 5 which can't be further divided by 8 so 13 mod(8) is equal to 5. 


        we'll be using the same property of mod(9) here to solve this question.

        now this property of number to give it sum of digits comes from the number system. 

        lets say a number 123: 123 = 1*100 +2*10 + 3. so taking mod 9 on lhs we get 1+2+3. hence by number theory it is viable to solve this problem using mod9 

        note : my solution starts next line
        best wishes from my side on solving this problem.
        
        """
        
        if num == 0:
            return 0
        return 1 + (num - 1) % 9
