#include<bits/stdc++.h>
using namespace std;

    class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int xoor{};
        
        for(auto& it:nums)
            xoor^=it;
        return xoor;
    }
};



int main(){
    Solution s;
    vector<int> v{2,2,1};

    cout<<s.singleNumber(v);
    return 0;
}