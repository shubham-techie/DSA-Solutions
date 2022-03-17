class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       /*
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
        */
        
        int map[26]{0};
        int cnt{};
        
        for(auto& ch:allowed)
            ++map[ch-'a'];
        
        for(auto& word:words)
            cnt+=all_of(word.begin(),word.end(),[&](char ch){return map[ch-'a'];});
        return cnt;
    }
};