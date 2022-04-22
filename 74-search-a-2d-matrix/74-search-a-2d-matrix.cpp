class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int t) {
        
        int m=matrix.size(), n=matrix[0].size();
        
        for(auto& it:matrix){
            
            int l{}, h{n-1};
            
            while(l<=h){
                int m=(l+h)/2;
                
                if(!(it[m]^t))
                    return true;
                if(it[m]>t)
                    h=m-1;
                else if(it[m]<t)
                    l=m+1;
            }
        }
        
        return false;
    }
};