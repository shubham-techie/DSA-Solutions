class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.length();
        
        stack<pair<char,int>> stk{};
        
        for(int i=n-1;i>=0;--i){
            
            if(stk.empty() || stk.top().first!=s[i]){
                stk.push({s[i], 1});
            }
            else if(stk.top().first==s[i]){
                stk.top().second+=1;
            }
            
            if(stk.top().second==k){
                stk.pop();
            }
        }
        
        s="";
        while(!stk.empty()){
            auto tmp=stk.top();
            stk.pop();
            
            while(tmp.second--)
                s+=tmp.first;
        }
        
        return s;
    }
};