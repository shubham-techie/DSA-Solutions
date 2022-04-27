class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj{}, cnt{};
        
        for(int& i:nums){
            maj= cnt==0? i : maj;
            cnt= (i==maj)? ++cnt : --cnt;
        }
        return maj;
    }
};