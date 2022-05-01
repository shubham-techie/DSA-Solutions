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
        
        if(k>0)
            s=s.substr(0,k);
        else
            s="";
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
    
    stack<char> processString1(string s){
        stack<char> s1;
        
        for(auto& i:s)
            if(i=='#' && !s1.empty())
                s1.pop();
            else if(i!='#')
                s1.push(i);
        return s1;
    }
    
    bool backspaceCompare(string s, string t) {
        
        int sn{}, tn{};
        
        processString(s, sn);
        processString(t, tn);
        
        return s==t;
//         if(sn!=tn)
//             return false;
        
//         for(int i=0;i<sn;++i)
//             if(s[i]!=t[i])
//                 return false;
//         return true;
        
        
        
        /*
        s=processString(s);
        t=processString(t);
        return s==t;
        */
        
        /*
        stack<char> s1=processString1(s);
        stack<char> t1=processString1(t);
        return s1==t1;
        */
    }
};