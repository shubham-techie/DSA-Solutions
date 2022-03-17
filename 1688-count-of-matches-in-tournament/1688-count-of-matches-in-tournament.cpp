class Solution {
public:
    int numberOfMatches(int n) {
        
        int match{};
       /* 
        while(n!=1){
            if(n%2){
                --n;
                n>>=1;
                match+=n;
                n+=1;
            }
            else{
                n>>=1;
                match+=n;
            }  
        }
        */
        
        while(n>1){
            match+=n>>1;
            n=(n+1)>>1;
        }
        return match;
    }
};