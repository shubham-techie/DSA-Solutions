[https://leetcode.com/problems/powx-n/]

class Solution {
public:
    double myPow(double x, int n) {     
        double tmp{1};
                
         while(n){
            if(n&1)
                tmp=n>0? tmp*x : tmp/x;
            
            x*=x;
            n/=2;
        }
        
        return tmp;
    }
};
