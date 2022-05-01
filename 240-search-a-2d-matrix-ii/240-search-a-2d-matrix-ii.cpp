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
        /*
        int n=matrix[0].size();
        
        for(auto& v:matrix)
          if(target>=v[0] && target<=v[n-1] && bSearch(v,target))
              return true;
        
        return false;
        */
        
        
        int m=matrix.size(), n=matrix[0].size();
        int rt{}, ct{n-1}, rb{m-1}, cb{};
        
        while(rt<m && ct>=0 && rb>=0 && cb<n && rt<=rb && cb<=ct){
            if(matrix[rt][ct]==target || matrix[rb][cb]==target)
                return true;
            
            if(matrix[rt][ct]<target) ++rt;
            else --ct;
            
            if(matrix[rb][cb]<target) ++cb;
            else --rb;
        }
        return false;
    }
};