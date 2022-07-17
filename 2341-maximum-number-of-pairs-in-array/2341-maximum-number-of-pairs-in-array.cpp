class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int arr[101]={0}, pairs{};
        
        for(int& i:nums)
            pairs += ++arr[i]%2==0? 1:0;            
        
        return {pairs, (int)nums.size()-pairs*2};
        
    }
};