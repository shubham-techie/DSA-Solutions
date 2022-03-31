class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int> res(n,pivot);
        
        for(int low{-1},high{n},i{},j{n-1};i<n;++i,--j){
            if(nums[i]<pivot) res[++low]=nums[i];
            if(nums[j]>pivot) res[--high]=nums[j];
        }
        
        return res;
    }
};