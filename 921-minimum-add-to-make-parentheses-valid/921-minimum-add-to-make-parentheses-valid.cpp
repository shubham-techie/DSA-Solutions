class Solution {
public:
    int minAddToMakeValid(string s) {
        
        /*
        stack<char> stk{};
        int cp{};
        
        for(char& c:s){
            if(c=='(')
                stk.push(c);
            else{
                if(stk.empty())
                    ++cp;
                else
                    stk.pop();
            }
        }
        
        return cp+stk.size();
        */
        
        int bal{}, cp{};
        
        for(char& c:s){
            bal+= c=='('? 1:-1;
            
            if(bal<0)
                ++cp, bal=0;
        }
        
        return cp+bal;
    }
};