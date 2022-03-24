class Solution {
public:
    int gcd(int a,int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
    
    int findGCD(vector<int>& nums) {
       int mx{nums[0]},mn{nums[0]};
        
        for(int i=1;i<nums.size();++i){
            if(mx<nums[i]) mx=nums[i];
           if(mn>nums[i]) mn=nums[i];
        }
       
       int GCD{1};
        for(int i=2;i<=mx;++i)
            if(mn%i==0 && mx%i==0)
                GCD=i;
    return GCD;
    }
};