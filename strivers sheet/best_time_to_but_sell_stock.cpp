[https://leetcode.com/problems/best-time-to-buy-and-sell-stock/]

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(), profit{}, mn{prices[0]};
        
        for(int i=1;i<n;++i){        
            int diff=prices[i]-mn;
            profit=max(profit,diff);
            mn=min(mn,prices[i]);
        }
        
        return profit;
    }
};
