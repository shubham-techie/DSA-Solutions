class Solution {
public:
    bool isPalindrome(string s) {
        string copy="";
        
        for(int i=0;i<s.length();++i){
            if(s[i]>='A' && s[i]<='Z')
                s[i]+=32;
            if((s[i]>='a' && s[i]<='z') || (s[i]>=48 && s[i]<=57))
                copy+=s[i];
        }

        int l{};
        int r=copy.length()-1;
        
        while(l<=r){
            if(copy[l]!=copy[r])
                return false;
            ++l;--r;
        }
        
        if(l>r) return true;
        return false;
    }
};