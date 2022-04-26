class Solution {
public:
    double myPow(double x, int n1) {     
        
        double tmp{1};
        long long n{n1};
        
        n=n<0? n*-1 : n;
        
         while(n){
            if(n&1){
                tmp*=x;
            }
            x*=x;
            n>>=1;
        }
        
        tmp=n1<0? 1/tmp : tmp;
        return tmp;
    }
};