class Solution {
public:
    int trailingZeroes(int n) {
        int divisor{5};
        int sum{};
        
        while(n>=divisor){
           sum+=n/divisor;                
            divisor*=5;       
        }
        return sum;
    }
};