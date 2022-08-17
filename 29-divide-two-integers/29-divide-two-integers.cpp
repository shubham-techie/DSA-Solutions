typedef long long ll;

class Solution {
public:
    int divide(int dd, int dv) {
        if(dd==INT_MIN && dv==-1) return INT_MAX;
        
        ll cnt=0;
        bool sign= (dd<0 ^ dv<0)? true:false;
        
        ll dd1=abs(dd);
        ll dv1=abs(dv);
        
        while(dd1>=dv1){
            ll tmpcnt=0;
            
            while(dd1>=dv1<<(tmpcnt+1)){
                ++tmpcnt;
            }
            dd1-=dv1<<tmpcnt;
            cnt+=1<<tmpcnt;
        }
        
        return sign? -cnt:cnt;
    }
};
