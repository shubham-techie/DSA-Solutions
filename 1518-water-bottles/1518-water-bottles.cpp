class Solution {
public:
    int numWaterBottles(int nfullb, int nexb) {
        int cnt{nfullb}, nemptyb{nfullb};
        nfullb=0;
        
        while(nemptyb>=nexb){
            nfullb=nemptyb/nexb;
            cnt=cnt+nfullb;
            nemptyb= (nemptyb%nexb) + nfullb;
        }
        return cnt;
    }
};