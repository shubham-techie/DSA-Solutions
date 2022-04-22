class Solution {
public:
    bool bsearch(vector<int>& it,int& t){
        
         int n=it.size(),l{}, h{n-1};

        while(l<=h){
            int m=(l+h)/2;

            if(!(it[m]^t))
                return true;
            if(it[m]>t)
                h=m-1;
            else if(it[m]<t)
                l=m+1;
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int t) {
        
        int m=matrix.size(), n=matrix[0].size();
        
        /*
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
        */
        
        if(t<matrix[0][0] || t>matrix[m-1][n-1])
            return false;
        
        int low_r{},high_r{m-1};
        
        while(low_r<=high_r){
            
            int mid_r=(low_r+high_r)/2;
            auto& it=matrix[mid_r];
            
            if(it[0]<=t && t<=it[n-1]) 
                return bsearch(it,t);
            
            else if(t<it[0])
                high_r=mid_r-1;
            
            else if(t>it[n-1])
                low_r=mid_r+1;
        }
        
        return false;
    }
};