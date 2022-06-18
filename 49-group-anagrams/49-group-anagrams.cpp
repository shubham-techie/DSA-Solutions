class Solution{
    public:
        vector<vector < string>> groupAnagrams(vector<string> &strs){
            unordered_map<string, vector< string>> map {};

            vector<string> v(strs.size());
            
            for(auto& it:strs){
                v.push_back(it);
                sort(begin(v.back()), end(v.back()));
                map[v.back()].push_back(it);
            }
            
            vector<vector<string>> res{};
            for(auto m:map)
                res.push_back(m.second);
            return res;
        }
};