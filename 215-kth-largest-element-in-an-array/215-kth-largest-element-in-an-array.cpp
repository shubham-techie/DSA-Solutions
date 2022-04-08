class Solution {
public:
    int partition(vector<int>& v, int left, int right){
        
        int i{left},pivot{v[right]};
        
        for(int j=left;j<right;++j){
            if(v[j]>=pivot){
                swap(v[j],v[i]);
                ++i;
            }
        }
        swap(v[i],v[right]);
        return i;
    }
    
    int quickSelect(vector<int>& nums, int k,int left,int right){
         
        int idx{partition(nums,left,right)};
     
            if(idx==k-1)
                return nums[idx];
        
            if(idx>k-1)
               return quickSelect(nums,k, left,idx-1);
            
            return quickSelect(nums,k, idx+1,right);
        
        return INT_MIN;
    }
    
    int findKthLargest(vector<int>& nums, int k) {
        
        /* Method 1: Sorting and finding kth ele

        sort(begin(nums),end(nums));
        return nums[nums.size()-k];
        */
        
        
        /* Method 2: using mapping
        map<int,int> m;
        
        for(int& i:nums)
            ++m[i];
        
        for(auto it=m.rbegin();it!=m.rend();++it){
            k-=it->second;
            
            if(k<=0)
                return it->first;
        }
        
        return -1;
        */
        
        
        /* Method 3: STL nth_element()
        
        nth_element(nums.begin(),nums.begin()+nums.size()-k,nums.end());
        return nums[nums.size()-k];
        */
        
        
        // Method 4: Quick Select
       return quickSelect(nums,k,0 ,nums.size()-1);
    }
};