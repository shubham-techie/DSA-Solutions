class Solution {
public:
    int largestCombination(vector<int>& nums) {
        /*
        vector<int> bits(32,0);
        
        for(int& i:nums){
            int idx=31;
            
            for(;i;i>>=1, --idx)
                bits[idx]+= (i & 1);
        }
        
        return *max_element(bits.begin(), bits.end());
        */
        
        int res{};
        
        for(int i=0;i<32;++i){
            int cnt{};
            
            for(int& it:nums)
                cnt+= (it>>i) & 1;
            
            res=max(res, cnt);
        }
        
        return res;
    }
};