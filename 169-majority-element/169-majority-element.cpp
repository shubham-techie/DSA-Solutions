class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele{}, cnt{};
        
        for(int& i:nums){
            ele=!cnt? i : ele;
            cnt=(i^ele)? --cnt : ++cnt;
        }
        return ele;
    }
};