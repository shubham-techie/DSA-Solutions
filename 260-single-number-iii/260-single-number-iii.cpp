class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int xorr{};
        int n1{};
        int idx{};
        
        for(auto& it:nums)
            xorr^=it;
        
        int tmp=xorr;
        
        while(1)
            if(tmp & 1)
                break;
            else{
                tmp>>=1;
                ++idx;
            }
        
        int mask=1<<idx;
        for(auto& it:nums)
            if(it & mask)
                n1^=it;  

         return vector<int>{xorr^n1,n1};
    }
};