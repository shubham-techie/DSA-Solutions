class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        vector<char> stk{};
        
        for(char& c:s){
            if(c=='(' || c=='{' || c=='[')
                stk.push_back(c);
            
            else{
                if(stk.empty())
                    return false;
                
               if(c==')'){
                   if(stk.back()=='(')
                       stk.pop_back();
                   else return false;
               }
                
                else if(c=='}'){
                     if(stk.back()=='{')
                       stk.pop_back();
                   else return false;
                }
                
                else if(c==']'){
                     if(stk.back()=='[')
                       stk.pop_back();
                   else return false;
                }
            }
            
        }
        
        if(stk.empty())
            return true;
        return false;
        
    }
};