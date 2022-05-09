class Solution {
public:
    vector<string> v{};
     unordered_map<char,string> map{
            {'2',"abc"},
            {'3',"def"},
            {'4',"ghi"},
            {'5',"jkl"},
            {'6',"mno"},
            {'7',"pqrs"},
            {'8',"tuv"},
            {'9',"wxyz"}
        };
    
    void backtrack(const string& digits, int j, string str){
        
        if(j==digits.length()){
            v.push_back(str);
            return;
        }
        string curmap{map[digits[j]]};
        
        for(int i=0;i<curmap.length();++i){
            str+=curmap[i];
            backtrack(digits, j+1, str);
            str.erase(prev(str.end()));
        }
    }
    
    vector<string> letterCombinations(string digits) {
        
        int n=digits.length();
        
        if(n==0) return {};
        
        string str{};    
        backtrack(digits, 0, str);
        return v;
    }
};