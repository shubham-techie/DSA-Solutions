class Solution {
public:
 
    void setZeroes(vector<vector<int>>& v) {

        /* SC: O(m+n), TC: O(2*(m*n))
       
        set<int> r{},c{};
        
        int m=v.size(), n=v[0].size();
        
        for(int i=0;i<m;++i)
            for(int j=0;j<n;++j)
                if(!(v[i][j]^0)){
                    r.insert(i);
                    c.insert(j);
                }
        
          for(int i=0;i<m;++i)
            for(int j=0;j<n;++j)
                if(r.find(i)!=r.end() || c.find(j)!=c.end())
                    v[i][j]=0;  
        */
        
        
        /* SC: O(m+n), TC: O(2*(m*n))
        
        int m=v.size(), n=v[0].size();
        vector<int> r(m,0), c(n,0);
        
        for(int i=0;i<m;++i)
            for(int j=0;j<n;++j)
                if(!(v[i][j]^0)){
                    r[i]=1;
                    c[j]=1;
                }
        
        for(int i=0;i<m;++i)
            for(int j=0;j<n;++j)
                if(!(r[i]^1) || !(c[j]^1))
                    v[i][j]=0;
        */
        
        
        int m=v.size(), n=v[0].size(), col0{1};
    
        for(int i=0;i<m;++i){
            
            if(!(v[i][0]^0))
                 col0=0;
            
            for(int j=1;j<n;++j)
                if(!(v[i][j]^0)){
                    v[i][0]=0;
                    v[0][j]=0;
                }
        }
        
        for(int i=m-1;i>=0;--i){
            for(int j=n-1;j>=1;--j)
                if(!(v[i][0]^0) || !(v[0][j]^0))
                    v[i][j]=0;
            
             if(!(col0^0))
                v[i][0]=0;
        }
   
    }
};