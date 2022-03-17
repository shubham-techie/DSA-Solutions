class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> map;
        int cnt{};
        
        for(auto& it:allowed)
            ++map[it];
        
        for(auto& word:words){
            int flag=1;
            for(auto& c:word){
                if(map.find(c)==map.end()){
                    flag=0;
                    break;
                }
            }
            if(flag)
                ++cnt;
        }
        return cnt;
    }
};