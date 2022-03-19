class Solution {
public:
    unordered_map<string,int> mapString(string s){
        unordered_map<string,int> map;
        string partial="";
        
        s+=" ";
        for(char& c:s){
            if(c==' '){
                ++map[partial];
                partial="";
                continue;
            }
            partial+=c;    
        }
        return map;
    }
    
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> map1=mapString(s1);
        unordered_map<string,int> map2=mapString(s2);
        
        vector<string> uncommonWords;
        
        for(auto& m:map1){
            if(m.second==1 && map2[m.first]==0)
                uncommonWords.emplace_back(m.first);
        }
        
        for(auto& m:map2){
            if(m.second==1 && map1[m.first]==0)
                uncommonWords.emplace_back(m.first);
        }
        return uncommonWords;
    }
};