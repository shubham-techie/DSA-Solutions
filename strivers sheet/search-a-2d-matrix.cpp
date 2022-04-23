[https://leetcode.com/problems/search-a-2d-matrix/]

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
        
        /* Method 1: Applying Binary search in each row . TC: O(m*log(n))
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
        
        
        /* Applying Binary search to select row in which target can lie. And then applying binary search in that particular row. TC: O(log(m) + log(n)) = O(log(m*n))
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
        */
        
        
        // Considering 2D matrix as 1D array and applying Binary Search. TC: O(log(m*n))
        int l{}, h{m*n-1};
        
        while(l<=h){
            int mid=(l+h)/2;
            int& x=matrix[mid/n][mid%n];
            
            if(!(x^t))
                return true;
            
            if(x>t)
                h=mid-1;
            
            else if(x<t)
                l=mid+1;   
        }
        
        return false;
    }
};
