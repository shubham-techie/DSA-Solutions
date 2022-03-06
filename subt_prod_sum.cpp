#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int subtractProductAndSum(int n) {
        
        int sum{0};
        int prod{1};
        
        while(n>0){
            int ldigit{n%10};
            
            sum+=ldigit;
            prod*=ldigit;
            
            n/=10;
        }
        
        return prod-sum;
    }
};


int main(){
    Solution s;
    cout<<s.subtractProductAndSum(234);
    return 0;
}