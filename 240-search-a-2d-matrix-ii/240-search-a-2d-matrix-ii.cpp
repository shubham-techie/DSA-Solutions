class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix[0].size();
        
        for(auto& v:matrix){
            int l{}, r{n-1};
            
            while(l<=r){
                int mid=(l+r)/2;
                
                if(v[mid]==target)
                    return true;
                if(v[mid]>target)
                    r=mid-1;
                else
                    l=mid+1;
            }
        }
        return false;
    }
};