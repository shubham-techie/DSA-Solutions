class Solution{
    public:
        vector<vector < string>> groupAnagrams(vector<string> &strs){
            unordered_map<string, vector< string>> map {};
            
            for(auto& it:strs){
                string s=it;
                sort(begin(s), end(s));
                map[s].push_back(it);
            }
            
            vector<vector<string>> res{};
            for(auto m:map)
                res.push_back(m.second);
            return res;
        }
};