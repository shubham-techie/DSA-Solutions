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
        
        int cnt=vp.size();
        i=0;
        while(i<vp.size() && k>0){
            --vp[i];
            --k;
            if(!vp[i]){
                --cnt;
                ++i;
            }
        }
        
        return cnt;
    }
};