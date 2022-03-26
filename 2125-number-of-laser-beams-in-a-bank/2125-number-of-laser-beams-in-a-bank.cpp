class Solution {
public:
    
    int numberOfBeams(vector<string>& bank) {
        int cnt{},res{};
        int n= bank.size();
        
        for(int i=0;i<n;++i){
            bitset<500> row(bank[i]);
            int tmp=row.count();
            
            if(tmp) res+=cnt*tmp, cnt=tmp;
        }
        return res;
    }
};