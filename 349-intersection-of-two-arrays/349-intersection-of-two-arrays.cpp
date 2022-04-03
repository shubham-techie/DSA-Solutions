class Solution {
public:
    void sortArray(vector<int>& v){
        sort(begin(v),end(v));
    }
    
    bool binarySearch(vector<int>& v, int& x){
        int low{},high=v.size()-1;
        
        while(low<=high){
            int mid=low+ ((high-low)>>1);
        
        if(!(v[mid]^x))
            return true;
        else if(v[mid]>x)
            high=mid-1;
        else
            low=mid+1;
        }
        return false;
    }
    
    vector<int> findIntersection(vector<int>& n1,vector<int>& n2){
        vector<int> res{};
        int n=n2.size();
        
        for(int i=0;i<n;){
            if(binarySearch(n1, n2[i]))
                res.emplace_back(n2[i]);
            ++i;
            
            while(i>0 && i<n && !(n2[i]^n2[i-1])) ++i;
        }
        
        return res;
    }
    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        /* Method 1: mapping 1st array and looking for intersection by iterating 2nd array
        
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
        */
        
        /* Method 2: Binary search on higher size vector for each element in smaller size vector
        vector<int> res{};
         sortArray(nums1);
        sortArray(nums2);
        
        if(nums1.size()>nums2.size())
            res=findIntersection(nums1, nums2);
        else
            res=findIntersection(nums2, nums1);
        
        return res;
        */
        
       
        /* Method 3: two pointers 
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
        
        // Method 4: using set
        unordered_set<int> s(nums1.begin(),nums1.end());
        vector<int> res{};
        
        for(int& i:nums2)
            if(s.count(i)){
                res.emplace_back(i);
                s.erase(i);
            }
        
            return res;
    }
};