class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int max_len{INT_MIN};
        
        for(string& sen:sentences){
            int len{};
            
            for(char& c:sen)
                len+=(c==' ');
            
            max_len=max(max_len,len+1);
        }
        
        return max_len;
    }
};