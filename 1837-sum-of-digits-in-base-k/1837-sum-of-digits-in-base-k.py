class Solution:
    def sumBase(self, n: int, k: int) -> int:
        sum=0;
        
        while n:
            sum+=n%k;
            n//=k;
        return sum;
        