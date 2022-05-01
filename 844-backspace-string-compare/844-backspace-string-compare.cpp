class Solution {
public:
    void processString(string& s, int& k){
        
        for(int i=0;i<s.length();++i)
            if(s[i]!='#'){
                s[k++]=s[i];
            }
            else{
                --k;
                k=max(0,k);
            }
    }
    
    bool backspaceCompare(string s, string t) {
        int sn{}, tn{};
        
        processString(s, sn);
        processString(t, tn);
        
        if(sn!=tn)
            return false;
        
        for(int i=0;i<sn;++i)
            if(s[i]!=t[i])
                return false;
        return true;
    }
};