class Solution {
public:
    int digitSum(int n){
        if(n==0) return 0;
        return n%10+digitSum(n/10);
    }
    
    int countBalls(int ll, int hl) {
        int map[46]={};
        int sum{digitSum(ll)};
        ++map[sum];
        int mx={1};
        
        for(++ll;ll<=hl;++ll){
            if(ll%10==0) sum=digitSum(ll);
            else ++sum;
            
            ++map[sum];
            mx=max(mx,map[sum]);
        }
        
        return mx;
    }
};