class Solution {
public:
    void help(string& digits, int idx, vector<string>& res, string str, unordered_map<char, string>& mp){
        if(idx==digits.size()){
            res.push_back(str);
            return;
        }
        
        for(char& c:mp[digits[idx]]){
            str+=c;
            help(digits, idx+1, res, str, mp);
            str.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
        
        unordered_map<char, string> mp{
            {'2',"abc"},
            {'3',"def"},
            {'4', "ghi"},
            {'5',"jkl"},
            {'6', "mno"},
            {'7',"pqrs"},
            {'8',"tuv"},
            {'9',"wxyz"}
        };
        
        vector<string> res{};
        string str;
        
        help(digits, 0, res, str, mp);
        return res;
    }
};