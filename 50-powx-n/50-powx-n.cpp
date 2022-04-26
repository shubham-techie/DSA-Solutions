class Solution {
public:
    double myPow(double x, int n1) {     
        if(!n1) return 1;
        
        double tmp{1};
        long long n{n1};
        
        n=n<0? n*-1 : n;
        
         while(n>1){
            if(n&1){
                tmp*=x;
                n-=1;
            }
            x*=x;
            n>>=1;
        }
        x*=tmp;
        
        x=n1<0? 1/x : x;
        return x;
    }
};