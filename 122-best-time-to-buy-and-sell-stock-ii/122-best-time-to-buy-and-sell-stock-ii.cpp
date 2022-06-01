class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyedStock{INT_MAX}, profit{0};
        int n=prices.size();
        
        for(int& i:prices){
            if(i>buyedStock){
                profit+=(i-buyedStock);
                buyedStock=i;
            }
            else
                buyedStock=min(buyedStock, i);
        }
        
        /*
            for(int i=1;i<n;++i){
                if(prices[i]>prices[i-1])
                    profit+=prices[i]-prices[i-1];
            }
        */
        return profit;
    }
};