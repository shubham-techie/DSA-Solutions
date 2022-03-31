class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int> res(n);
        int low{},same{},high{};
        
        for(int& i:nums)
            if(i<pivot) ++low;
            else if(i==pivot) ++same;
        
        //setting index
        high=low+same-1;
        same=low-1;
        low=-1;
        
        for(int& i:nums){
            if(i<pivot) res[++low]=i;
            else if(i>pivot) res[++high]=i;
            else res[++same]=i;
        }
//         vector<int> res(n,pivot);
        
//         for(int low{-1},high{n},i{},j{n-1};i<n;++i,--j){
//             if(nums[i]<pivot) res[++low]=nums[i];
//             if(nums[j]>pivot) res[--high]=nums[j];
//         }
        
        return res;
    }
};