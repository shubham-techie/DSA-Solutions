class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        res=[]
        
        for i in range(left,right+1):
            tmp=i
            while tmp>0:
                rem=tmp%10
                if(rem==0 or i%rem!=0):
                    break
                tmp//=10
            if not tmp:
                res.append(i)
        return res
                
        