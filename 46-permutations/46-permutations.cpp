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
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> v{};
        vector<bool> flag(nums.size());   //false means elements can be taken
        vector<int> tmp{};
        
        getPermutation(nums, v, flag, tmp);
        return v;
    }
};