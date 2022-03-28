class Solution {
public:
    void sortArray(vector<int>& v){
        sort(begin(v),end(v));
    }
    
    bool isInNums2(vector<int>& nums2,int& a){
        int low{},high=nums2.size()-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(!(nums2[mid]^a)) return true;
            else if(nums2[mid]<a) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sortArray(nums1);
        sortArray(nums2);
        
        vector<int> res;
        
        for(auto& i:nums1){
            if(!isInNums2(res,i) && isInNums2(nums2,i))
                res.emplace_back(i);
        }
        
        return res;
    }
};