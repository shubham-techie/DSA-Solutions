#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isHappy(int n) {
       if(n==1 || n==7)
           return true;
        
        if(n<10)
            return false;
        
        int sum=0;
        
        while(n){
            int rem=n%10;
            sum+=rem*rem;
            n/=10;
        }
        return isHappy(sum);
    }
};


int main(){
    Solution s;
    cout<<boolalpha<<s.isHappy(19);
    return 0;
}