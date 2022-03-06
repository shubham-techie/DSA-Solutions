#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int hammingWeight(uint32_t n) {
    
        bitset<32>b=n;
        
        return b.count();
            
    }
};


int main(){
    Solution s;
    cout<<s.hammingWeight(00000000000000000000000000001011);
    return 0;
}