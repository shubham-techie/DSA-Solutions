class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        
        for(int i=1,j=n-1;i<=n/2;++i,--j){
           v.emplace_back(i);
            v.emplace_back(0-i);
        }
        if(n&1) v.emplace_back(0);
        
        return v;
    }
};