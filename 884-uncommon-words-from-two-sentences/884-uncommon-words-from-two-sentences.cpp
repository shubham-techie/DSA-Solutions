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
        s1=s1+" "+s2;
        
        unordered_map<string,int> map1=mapString(s1);
        vector<string> uncommonWords;
        
        for(auto& m:map1)
            if(m.second==1)
                uncommonWords.emplace_back(m.first);
       
        return uncommonWords;
    }
};