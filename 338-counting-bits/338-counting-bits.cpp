class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> v(n+1);
        
        for(int i=0;i<=n;++i){
            bitset<32>b(i);
            v[i]=b.count();
        }
        return v;
    }
};