class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int dec{};
        
//         for(int i=31;i>=0;--i){
//             int cnt{};
//             int mask=1<<i;
            
//             for(int num:nums){
//                 if(num & mask)
//                 ++cnt;
//             }
            
//             if(cnt%3)
//                 dec+=(1<<i);
//         }

        int a[32]{0};
        
        for(auto& it:nums){
            bitset<32> b(it);
            
            for(int j=0;j<32;++j)
                a[j]=(a[j]+b[j])%3;
        }
        
        long long base=1;
        
        for(int i=0;i<32;++i){
            dec+=a[i]*base;
            base*=2;
        }
        return dec;
    }
};