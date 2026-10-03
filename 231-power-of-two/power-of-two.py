class Solution:
    
    
    def isPowerOfTwo(self, n: int) -> bool:
        if n==1:
            return True
        elif n%2 == 1 or n==0:
            return False
        else:
            n=n/2
            return self.isPowerOfTwo(n)
        
        
        