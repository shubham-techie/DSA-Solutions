class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n=palindrome.size();
        if(n==1) return "";
        
        for(int i=0;i<n/2;++i){
            char& c=palindrome[i];
            if(c!='a'){
                c='a';
                return palindrome;
            }
        }
        
        palindrome[n-1]='b';
        return palindrome;
    }
};