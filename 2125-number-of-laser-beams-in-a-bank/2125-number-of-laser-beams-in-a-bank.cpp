class Solution {
public:
    
    int numberOfBeams(vector<string>& bank) {
        int cnt{},res{};
                
        for(int i=0;i<bank.size();++i){
            bitset<500> row(bank[i]);
            int tmp=row.count();
            
            if(tmp!=0) res+=cnt*tmp, cnt=tmp;
        }
        return res;
    }
};