class Solution {
public:
    int numberOfMatches(int n) {
        return n-1;
       /* 
        while(n>1){
            match+=n>>1;
            n=(n+1)>>1;
        }
        return match;
        */
    }
};