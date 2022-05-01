class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int> map;
        int n=cards.size(), mn{INT_MAX};
        
        for(int i=0;i<n;++i){
            int tmp{};
            
            if(map.find(cards[i])!=map.end()){
                 tmp = i-map[cards[i]]+1;
                 mn=min(tmp,mn);
            }
            map[cards[i]]=i;
        }
        
        return mn==INT_MAX? -1: mn;
    }
};
