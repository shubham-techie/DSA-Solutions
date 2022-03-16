class Solution {
public:
    int xorOperation(int n, int start) {
        int xorr=0;
        
        for(int j=0;j<n;++j)
            xorr^=(start+2*j);
        
        return xorr;
    }
};