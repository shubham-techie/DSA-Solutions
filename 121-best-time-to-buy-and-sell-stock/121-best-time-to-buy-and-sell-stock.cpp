class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mxprofit{}, mxprice{};
        
        for(auto i=prices.end();i--!=prices.begin();){
            mxprice=max(mxprice,*i);
            mxprofit=max(mxprice-*i, mxprofit);
        }
        
        return mxprofit;
    }
};