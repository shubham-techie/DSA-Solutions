class Solution {
public:
    bool iscommon(bitset<26>& a, bitset<26>& b){
        for(int i=0;i<26;++i)
            if(a[i] && b[i])
                return true;
        return false;
    }
    
    int maxProduct(vector<string>& words) {
        
        int n=words.size(), mx{};
        vector<bitset<26>> v(n);
        
        for(int i=0;i<n;++i)
            for(char& c:words[i])
                v[i][c-'a']=1;
        
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                if(!iscommon(v[i], v[j]))
                    mx=max(mx, int(words[i].length()*words[j].length()));
            }
        }
        return mx;
    }
};