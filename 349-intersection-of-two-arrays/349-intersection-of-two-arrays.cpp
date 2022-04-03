class Solution {
public:
    void sortArray(vector<int>& v){
        sort(begin(v),end(v));
    }
    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int cntArray[1001]{};
        vector<int> res{};
        
        for(int& i:nums1)
            if(!cntArray[i])
                ++cntArray[i];
        
        for(int& i:nums2)
            if(cntArray[i]){
                res.emplace_back(i);
                --cntArray[i];
            }
        
        return res;
       /*
        sortArray(nums1);
        sortArray(nums2);
        
        vector<int> res;
        
        for(int i=0,j=0;i<nums1.size() && j<nums2.size();){
            if(!(nums1[i]^nums2[j])){
                res.emplace_back(nums1[i]);
                ++i; ++j;
            }
            
            else if(nums1[i]>nums2[j])
                ++j;
            
            else
                ++i;
            
            while(i>0 && i<nums1.size() && !(nums1[i-1]^nums1[i])) ++i;
            while(j>0 && j<nums2.size() && !(nums2[j-1]^nums2[j])) ++j;
        }
        
        
        return res;
        */
    }
};