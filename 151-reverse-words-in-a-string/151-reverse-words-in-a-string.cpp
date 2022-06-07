class Solution {
public:
    string reverseWords(string s) {
        
        stack<string> stk{};
        string tmp="";
        
        for(char& c: s){
            if(c!=' '){
                tmp+=c;
            }
            else{
                if(tmp.size()!=0){
                    stk.push(tmp);
                    tmp="";
                }
            }
        }
        
        if(tmp.size()!=0)
            stk.push(tmp);
            
        s="";
        while(!stk.empty()){
            s+=" "+ stk.top();
            stk.pop();
        }
            
        return s.substr(1);    
    }
};