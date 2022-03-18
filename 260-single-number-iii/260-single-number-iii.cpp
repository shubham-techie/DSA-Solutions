class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       vector<int> v(2,1);
        /*
        unordered_map<int,int> map;
        int i=-1;
        
        for(auto& it:nums)
            ++map[it];
        
        for(auto& it:map){
            if(it.second==1)
                v[++i]=it.first;
        }
        */
        int xorr{};
        int n1{};
        int idx{};
        int tmp{};
        
        for(auto& it:nums)
            xorr^=it;
        
        tmp=xorr;
        
        while(1){
            if(tmp & 1)
                break;
            else{
                tmp>>=1;
                ++idx;
            }
        }
        
        int mask=1<<idx;
        
        for(auto& it:nums){
            if(it & mask)
                n1^=it;  
        }
        
        xorr^=n1;
        
        v={xorr,n1};
         return v;
    }
};