#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {
        
        int count{};
        int totalNos{high-low+1};
        
        if(totalNos%2==0)
            return totalNos/2;
        else{
            if(high%2==0)
                return totalNos/2;
            else
                return totalNos/2+1;
        }
        
    }
};

int main(){
    Solution s;

   cout<< s.countOdds(8,10);
}