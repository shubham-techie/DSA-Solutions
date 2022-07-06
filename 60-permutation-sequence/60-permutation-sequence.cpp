class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> nums(n);
        int permutations_of_each_no{1};
        
        string kth_permute="";
        k=k-1;                    //for 0th-indexing
        
        //generating a vector of numbers & 
        //calculating no of permutations each number will make
        for(int i=1;i<n;++i){
            nums[i-1]=i;
            permutations_of_each_no*=i;
        }
        nums[n-1]=n;
        
        while(true){
            kth_permute += to_string(nums[k/permutations_of_each_no]);
            nums.erase(nums.begin() + k/permutations_of_each_no);
            
            if(!nums.size()) break;
            
            //updating k---> as for kth sequence in the current group for reduced set of numbers
            k = k % permutations_of_each_no;
            
            //permutations_of_each_no for remaining set of numbers
            permutations_of_each_no = permutations_of_each_no / nums.size();
        }
        
        return kth_permute;
    }
};