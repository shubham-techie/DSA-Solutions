class Solution {
public:
    int minOperations(int n) {
        int res{};
        int tmp{n/2};
        
        for(int i=1;i<=tmp;++i)
            res+=2*i;
        
        if(!(n&1)) res-=tmp;
        return res;
    }
};