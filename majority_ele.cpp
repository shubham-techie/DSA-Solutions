#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int majorityElement(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        
        return nums[nums.size()/2];
    }
};


int main(){
    Solution s;
    vector<int> v{2,2,1,1,1,2,2};
    cout<<s.majorityElement(v);
    return 0;
}