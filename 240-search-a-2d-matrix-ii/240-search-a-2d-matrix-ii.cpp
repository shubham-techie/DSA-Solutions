class Solution {
public:
    bool bSearch(vector<int>& v, const int& target){
        int n=v.size(), l{}, r{n-1};
            
        while(l<=r){
            int mid=(l+r)/2;

            if(v[mid]==target)
                return true;
            if(v[mid]>target)
                r=mid-1;
            else
                l=mid+1;
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix[0].size();
        
        for(auto& v:matrix)
          if(target>=v[0] && target<=v[n-1] && bSearch(v,target))
              return true;
        
        return false;
        
        
   
    }
};