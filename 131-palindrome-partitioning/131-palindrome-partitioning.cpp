class Solution {
public:
    bool isPalindrome(string& s, int start, int end){
        while(start<=end)
            if(s[start++]!=s[end--])
                return false;
        return true;
    }
    
    void findPalindromes(string& s, vector<vector<string>>& res, vector<string>& partial_res, int idx){
        
        if(idx==s.size()){
        res.push_back(partial_res);
            return;
        }
        
        for(int i=idx;i<s.size();++i){
            if(isPalindrome(s, idx, i)){
                partial_res.push_back(s.substr(idx, i-idx+1));
                findPalindromes(s, res, partial_res, i+1);
                partial_res.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> res{};
        vector<string> partial_res{};
        
        findPalindromes(s, res, partial_res, 0);
        return res;
    }
};