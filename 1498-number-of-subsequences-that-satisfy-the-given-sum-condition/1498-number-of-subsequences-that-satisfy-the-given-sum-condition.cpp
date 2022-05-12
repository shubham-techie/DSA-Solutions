class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        
        int i{}, j=nums.size()-1, mod=1000000007;
        long long cnt{};
        int pow[j+1];
        pow[0]=1;
        
        for(int i=1;i<j+1;++i)
            pow[i] = pow[i - 1] * 2 % mod;
        
        while(i<=j){            
            if(nums[i]+nums[j]<=target){
                cnt= (cnt+pow[j-i])%mod;
                ++i;
            }
            
            else
                --j;            
        }
        return cnt;
    }
};