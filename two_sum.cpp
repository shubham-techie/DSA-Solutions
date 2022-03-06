#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        vector<int> v;
        
        for(int i{0};i<nums.size();++i){
         
            int c=target-nums[i];
    
            auto it=find(nums.begin()+i+1,nums.end(),c);

            if(it!=nums.end()){
                v.push_back(i);
                v.push_back(it-nums.begin());
                break;
            }
        }
        
        return v;
    }
};

int main(){
    Solution s;
    vector<int>v{2,7,11,15};

    for(auto& it:s.twoSum(v,9))
        cout<<it<<" ";
}