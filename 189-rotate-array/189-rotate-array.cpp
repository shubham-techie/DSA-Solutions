class Solution {
public:
    void reverse(vector<int>& v, int i, int j){
        while(i<j)
            swap(v[i++],v[j--]);
    }
    
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
        
        reverse(nums,0, n-1-k);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
    }
};