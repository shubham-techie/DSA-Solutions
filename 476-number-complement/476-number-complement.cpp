class Solution {
public:
     int findComplement(int num) {
       
         long powerOf2s{2},tmp{num};
         
         while(tmp>>1){
             tmp>>=1;
             powerOf2s<<=1;
         }
         return powerOf2s-1-num;
    }
};