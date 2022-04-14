class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int max_wealth{INT_MIN};
        
        for(vector<int>& v:accounts){
            
            int sum{};
            for(int& i:v)
                sum+=i;
            
            max_wealth=max(sum,max_wealth);
        }
        
        return max_wealth;
    }
};