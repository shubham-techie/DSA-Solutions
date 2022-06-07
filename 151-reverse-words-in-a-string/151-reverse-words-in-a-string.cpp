class Solution {
public:
    string reverseWords(string s) {
        s+=" ";
        string tmp="", res="";
        
        for(char& c: s){
            if(c!=' '){
                tmp+=c;
            }
            else{
                if(tmp.size()!=0){
                    res= " "+ tmp +res;
                    tmp="";
                }
            }
        }
        
        return res.substr(1);    
    }
};