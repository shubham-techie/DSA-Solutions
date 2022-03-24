class Solution:
    def sumZero(self, n: int) -> List[int]:
        v=[]
        
        for i in range(1,n//2+1):
            v.append(i)
            v.append(-i)
        
        if n&1:
            v.append(0)
        return v
        