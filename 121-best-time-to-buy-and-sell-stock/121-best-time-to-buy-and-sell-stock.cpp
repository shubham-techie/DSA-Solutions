class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(), profit{}, mn{prices[0]}, diff{};
        
        for(int i=1;i<n;++i){
            diff=prices[i]-mn;
            profit=max(profit,diff);
            mn=min(mn,prices[i]);
        }
        
        return profit;
    }
};