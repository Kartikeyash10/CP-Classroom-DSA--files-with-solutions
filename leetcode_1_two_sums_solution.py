class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        #my solution starts from next line
        """ instead of going of through the list, 
        I plan of iterating using the complement,
        further explaination:
            for some target y: its complement at every index i,value x is x-[i] 
            it will then be more a mathematical solution, 
            as i am a math guy myself. I guess that would help me solve better."
            I wish you all the best on solving this. """

        prev_map = {} 
        #this creates a map for me
    
        # in this next set of lines I did the explaination part thing 
        #plus storing and checking the already stored values
        for i, n in enumerate(nums):
            complement = target - n
        
            if complement in prev_map:
                return [prev_map[complement], i]
        
            # Store the current number and its index in the map
            prev_map[n] = i
