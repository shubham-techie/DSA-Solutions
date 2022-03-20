class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> map;
        for(int& i:arr)
            ++map[i];
        
        int i{-1};
        vector<int> vp(map.size());
        for(auto& m:map)
            vp[++i]=m.second;
        
        sort(vp.begin(),vp.end());
        
        int cnt{};
        for(auto& it:vp){
            if(k>=it){
                k-=it;
                ++cnt;
            }
            else
                return vp.size()-cnt;
        }
        return vp.size()-cnt;
    }
};