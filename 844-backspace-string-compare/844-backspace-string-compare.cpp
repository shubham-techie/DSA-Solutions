class Solution {
public:
    void processString1(string& s){
        int k{};
        
        for(int i=0;i<s.length();++i)
            if(s[i]!='#')
                s[k++]=s[i];
            else{
                --k;
                k=max(0,k);
            }
        
        s=s.substr(0,k);
    }
    
    string processString2(string s){
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
    
    stack<char> processString3(string s){
        stack<char> s1;
        
        for(auto& i:s)
            if(i=='#' && !s1.empty())
                s1.pop();
            else if(i!='#')
                s1.push(i);
        return s1;
    }
    
    bool backspaceCompare(string s, string t) {
        
        processString1(s);
        processString1(t);
        return s==t;
        
        
        /*
        s=processString2(s);
        t=processString2(t);
        return s==t;
        */
        
        /*
        stack<char> s1=processString3(s);
        stack<char> t1=processString3(t);
        return s1==t1;
        */
    }
};