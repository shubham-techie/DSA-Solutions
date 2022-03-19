class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int min{},sum{};
        
        for(int& it:nums){
            sum+=it;
            
            if(min>sum) min=sum;
        }
        
        return 1-min;
    }
};