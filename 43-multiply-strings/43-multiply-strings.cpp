class Solution {
public:
    string multiply(string a, string b) {
        
        int n1=a.size(), n2=b.size();
        string add(n1+n2, '0');
        
        for(int i=n1-1;i>=0;--i){
            int cr{};
            
            for(int j=n2-1;j>=0;--j){
                int tmp= (add[i+j+1]-'0') + cr + (a[i] -'0')*(b[j]-'0');
                add[i+j+1]= tmp%10 +'0';
                cr= tmp/10;
            }
            add[i]+=cr;
        }
        
        size_t startpos=add.find_first_not_of("0");
        if(startpos!=string::npos)
            return add.substr(startpos);
        
        return "0";
    }
};