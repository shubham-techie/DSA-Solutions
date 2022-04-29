class Solution {
public:
    int merge(vector<int>& nums, int l, int m, int r){
        
        int cnt{};
        
         for(int i=m, j=l;i<=r;++i)
             for(;j<m;++j)
             if(nums[j]> 2LL*nums[i]){
                 cnt+=(m-j);
                 break;
             }
        
//         int a=m;
//         for(int i=l;i<m;++i){
//             while(a<=r && nums[i]> 2LL*nums[a])
//                 ++a;
//             cnt+=a-m;
//         }
        
        vector<int> tmp(r-l+1);
        int i{l}, j{m}, k{};
        
        while(i<m && j<=r){
            if(nums[i]<nums[j])
                tmp[k++]=nums[i++];
            else 
                tmp[k++]=nums[j++];
        }
        
        while(i<m)
            tmp[k++]=nums[i++];
        while(j<=r)
            tmp[k++]=nums[j++];
        
        for(int i=l;i<=r;++i)
            nums[i]=tmp[i-l];
        
        return cnt;
    }
    
   int mergeSort(vector<int>& nums, int l ,int r){
       if(l>=r) return 0;
       
       int cnt{};
       int mid=(l+r)/2;
       cnt+=mergeSort(nums,l,mid);
       cnt+=mergeSort(nums, mid+1,r);
       cnt+=merge(nums, l,mid+1,r);
       
       return cnt;
    }
    
    int reversePairs(vector<int>& nums) {  
        return mergeSort(nums, 0, nums.size()-1);
    }
};