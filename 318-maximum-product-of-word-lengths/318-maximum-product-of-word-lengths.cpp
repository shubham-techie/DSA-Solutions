class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n=words.size(), mx{};
        
        for(int i=0;i<n-1;++i){
            
            //map current word
            unordered_map<char, bool> map{};
            for(char& c:words[i])
                map[c]=true;
            
            //compare current word with all next words
            for(int j=i+1;j<n;++j){
                
                int k{}, wl=words[j].length();
                for(;k<wl;++k){
                    if(map[words[j][k]])
                        break;
                }
                
                if(k==wl)
                    mx=max(mx, int(wl*words[i].length()));
            }
        }
        
        return mx;
    }
};