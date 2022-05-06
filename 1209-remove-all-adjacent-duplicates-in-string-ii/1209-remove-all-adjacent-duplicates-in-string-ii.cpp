class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.length();
        if(n<k) return s;
        vector<pair<char,int>> stk{};
        
        for(int i=0;i<n;++i){

            if(stk.empty() || stk.back().first!=s[i])
                stk.push_back({s[i], 0});
            
            if(++stk.back().second==k)
                stk.pop_back();
        }
        
        s="";
        for(auto& tmp:stk)
            s+=string(tmp.second, tmp.first);
        
         return s;
    }
};