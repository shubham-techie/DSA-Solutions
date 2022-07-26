class Solution {
public:
    int cnt(string s, char c){
        return count(begin(s), end(s), c);
    }
    
    void generate(int n, string s, vector<string>& res){
        int lp=cnt(s,'(');
        int rp=cnt(s, ')');
        
        if(rp>n || lp>n || rp>lp)
            return;
        
        if(lp==rp && lp==n){
            res.push_back(s);
            return;
        }
        
        generate(n, s+'(', res);
        generate(n, s+')', res);
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        generate(n, "", res);
        return res;
    }
};