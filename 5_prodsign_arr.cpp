#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int arraySign(vector<int>& nums) {

        int neg_count{0};

        for(auto& it:nums){

            if(it==0)
                return 0;
            if(it<0)
                ++neg_count;
        }

        if(neg_count%2==1) return -1;
        else return 1;
    }
};


int main(){
    Solution s;
    vector<int> v{-1,-2,-3,-4,3,2,1};
    cout<<s.arraySign(v);
    return 0;
}