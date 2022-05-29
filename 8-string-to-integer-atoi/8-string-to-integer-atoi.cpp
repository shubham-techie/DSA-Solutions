class Solution {
public:
    int myAtoi(string s) {
        if(!s.size())
            return 0;
        
        int n=s.length();
        int i{}, sign{1};
        long res{};
        
        for(;i<n && s[i]==' ';++i);
        
        if(i<n && (s[i]=='+' || s[i]=='-'))
            if(s[i++]=='-') sign=-1;
        
        while(i<n && isdigit(s[i])){
            res=res*10 + (s[i]-'0');
            if(sign==1 && res>INT_MAX) return INT_MAX;
            if(sign==-1 && res*sign<INT_MIN) return INT_MIN;
            ++i;
        }
        
        return int(res*sign);
    }
};