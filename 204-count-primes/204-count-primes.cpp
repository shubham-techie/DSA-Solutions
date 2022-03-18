class Solution {
public:
    int countPrimes(int n) {
        if(n<2) return 0;
        
        vector<bool> v(n,true);
        int cnt{};

        v[0]=false;
        v[1]=false;
        
        for(int i=2;i*i<n;++i)
            for(int j=2*i;j<n;j+=i)
                v[j]=false;
            
        for(auto it:v)
            cnt+=it;
        
        return cnt;
    }
};