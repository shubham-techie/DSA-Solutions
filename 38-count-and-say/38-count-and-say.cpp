class Solution {
public:
    string makeString(string s, int x){
        
        if(x==1)
            return s;
        
        int n=s.length(), cnt{1};
        string res="";
        
        for(int i=1;i<n;++i){
            if(s[i]!=s[i-1]){
                res=res + to_string(cnt) + s[i-1];
                cnt=0;
            }
            ++cnt;
        }
         res=res + to_string(cnt) + s[n-1];
        
        return makeString(res, x-1);
    }
    
    string countAndSay(int n) {
        
       return makeString("1", n);
        
    }
};