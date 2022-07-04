class Solution {
public:
    void getPermutation(vector<int>& nums, vector<vector<int>>& v, vector<bool> flag, vector<int> tmp){
        if(tmp.size()==nums.size()){
            v.push_back(tmp);
            return;
        }
        
        for(int i=0;i<nums.size();++i)
            if(!flag[i]){
            tmp.push_back(nums[i]);
            flag[i]=!flag[i]; //true : cannot be taken
            
            getPermutation(nums, v, flag, tmp);
            
            tmp.pop_back();
            flag[i]=!flag[i];
        }
    }
    
    void getPermutation(vector<int>& nums, vector<vector<int>>& v, int idx){
        if(idx==nums.size()){
            v.push_back(nums);
            // return;
        }
        
        for(int i=idx;i<nums.size();++i){
            swap(nums[idx], nums[i]);
            getPermutation(nums, v, idx+1);
            swap(nums[idx], nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> v{};
//         vector<bool> flag(nums.size());   //false means elements can be taken
//         vector<int> tmp{};
        
//         getPermutation(nums, v, flag, tmp);
        
            getPermutation(nums, v, 0);
        return v;
    }
};