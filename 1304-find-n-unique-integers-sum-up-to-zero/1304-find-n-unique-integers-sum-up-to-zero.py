class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v(n);
        int j{n-1};
        
        for(int i=1;i<=n/2;++i,--j){
          v[i-1]=i;
          v[j]=0-i;
        }
        if(n&1) v[j]=0;
        
        return v;
    }
};