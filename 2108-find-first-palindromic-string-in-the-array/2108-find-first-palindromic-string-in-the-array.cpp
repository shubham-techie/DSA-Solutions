class Solution {
public:
    bool isPalindrome(string s){
        int low{},high=s.length()-1;
       
        while(low<=high){
            if(s[low]!=s[high])
                return false;
            ++low; --high;
        }
        return true;
    }
    
    string firstPalindrome(vector<string>& words) {
        
        for(string& s:words){
            if(isPalindrome(s))
                return s;
        }
        return "";
    }
};