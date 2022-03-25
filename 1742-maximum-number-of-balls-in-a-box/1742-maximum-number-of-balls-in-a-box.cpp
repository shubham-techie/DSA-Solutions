class Solution {
public:
    int countBalls(int ll, int hl) {
        unordered_map<int,int> map;
        
        for(;ll<=hl;++ll){
            int tmp=ll;
            int sum{};
            while(tmp){
                sum+=tmp%10;
                tmp/=10;
            }
            ++map[sum];
        }
        
        multimap<int,int>mm;
        for(auto& it:map)
            mm.insert({it.second,it.first});
        
        auto i=mm.rbegin();
        return i->first;
    }
};