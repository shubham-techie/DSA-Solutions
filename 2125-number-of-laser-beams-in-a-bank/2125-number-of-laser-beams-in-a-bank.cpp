class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int cnt{},res{};
        
        cnt=count(bank[0].begin(),bank[0].end(),'1');
        
        for(int i=1;i<bank.size();++i){
            int tmp=count(bank[i].begin(),bank[i].end(),'1');
            
            if(tmp!=0) res+=cnt*tmp, cnt=tmp;
        }
        return res;
    }
};