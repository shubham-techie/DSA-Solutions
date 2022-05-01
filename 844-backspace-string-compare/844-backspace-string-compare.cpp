class Solution {
public:
    void processString(string& s, int& k){
        
        for(int i=0;i<s.length();++i)
            if(s[i]!='#')
                s[k++]=s[i];
            else{
                --k;
                k=max(0,k);
            }
    }
    
    string processString(string s){
        string res="";
        int bs{};
        
        for(int i=s.length()-1; i>=0;--i)
            if(s[i]=='#')
                ++bs;
            else{
                if(bs)
                    --bs;
                else
                    res+=s[i];
            }
        return res;
    }
    
    bool backspaceCompare(string s, string t) {
        /*
        int sn{}, tn{};
        
        processString(s, sn);
        processString(t, tn);
        
        if(sn!=tn)
            return false;
        
        for(int i=0;i<sn;++i)
            if(s[i]!=t[i])
                return false;
        return true;
        */
        
        s=processString(s);
        t=processString(t);
        return s==t;
    }
};