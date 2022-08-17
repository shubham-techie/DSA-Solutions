class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> st{};
        unordered_map<char, string> mp{
            {'a',".-"},
            {'b',"-..."},
            {'c',"-.-."},
            {'d',"-.."},
            {'e',"."},
            {'f',"..-."},
            {'g',"--."},
            {'h',"...."},
            {'i',".."},
            {'j',".---"},
            {'k',"-.-"},
            {'l',".-.."},
            {'m',"--"},
            {'n',"-."},
            {'o',"---"},
            {'p',".--."},
            {'q',"--.-"},
            {'r',".-."},
            {'s',"..."},
            {'t',"-"},
            {'u',"..-"},
            {'v',"...-"},
            {'w',".--"},
            {'x',"-..-"},
            {'y',"-.--"},
            {'z',"--.."}
        };  
        
        for(string& s:words){
            string tmp="";
            
            for(char& c:s)
                tmp+=mp[c];
            
            st.insert(tmp);
        }
        
        return st.size();
    }
};