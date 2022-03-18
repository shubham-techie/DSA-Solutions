class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a[32]{0};
        
        for(auto& it:nums){
            bitset<32> b(it);
            
            for(int j=0;j<32;++j)
                a[j]=(a[j]+b[j])%3;
        }
        
        long long base=1;
        int dec{};
        
        for(int i=0;i<32;++i){
            dec+=a[i]*base;
            base*=2;
        }
        return dec;
    }
};