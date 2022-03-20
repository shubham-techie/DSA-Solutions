class Solution {
public:
    static bool cmp(pair<int,int>& a, pair<int,int>& b){
        return a.second<b.second;
    }
    
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> map;
        for(int& i:arr)
            ++map[i];
        
        int i{-1};
        vector<pair<int,int>> vp(map.size());
        for(auto& m:map)
            vp[++i]=m;
        
        sort(vp.begin(),vp.end(),cmp);
        
        int cnt{};
        for(auto& it:vp){
            if(k>=it.second){
                k-=it.second;
                ++cnt;
            }
            else
                return vp.size()-cnt;
        }
        return vp.size()-cnt;
    }
};