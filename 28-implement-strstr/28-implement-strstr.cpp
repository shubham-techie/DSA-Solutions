class Solution {
public:
    int strStr(string h, string n) {
        
        int hl=h.size(), nl=n.size();
        
        for(int i=0;i<=hl-nl;++i){
            
            if(n[0]==h[i]){
                int j=1;
                for(;j<nl;++j)
                    if(n[j]!=h[i+j])
                        break;
                if(j==nl)
                    return i;
            }
        }
        return -1;
    }
};