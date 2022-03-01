#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void twoSum(vector<int>& nums, int target) {
        
        for(int i{0};i<nums.size();++i){
            
            int c=target-nums[i];
    
            auto it=find(nums.begin()+i+1,nums.end(),c);

            if(it!=nums.end()){
                cout<<i<<" "<<(it-nums.begin());
                break;
            }
        }
    }
};

int main(){
    Solution s;
    vector<int>v{2,15,11,7};

    s.twoSum(v,9);
}