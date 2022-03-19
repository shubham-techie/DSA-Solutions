class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int min{},sum{};
        
        for(int& it:nums){
            sum+=it;
            min=min>sum?sum:min;
        }
        
        return 1-min;
    }
};