class Solution {
public:
 
    void setZeroes(vector<vector<int>>& v) {
//        // SC: O(m+n), TC: O(3*(m*n))
       
//         set<int> r{},c{};
        
//         int m=v.size(), n=v[0].size();
        
//         for(int i=0;i<m;++i)
//             for(int j=0;j<n;++j)
//                 if(!(v[i][j]^0)){
//                     r.insert(i);
//                     c.insert(j);
//                 }
        
//         /* with this approach --> TC: O(3*(m*n))
//         for(int i:r)
//             for(int j=0;j<n;++j)
//                 v[i][j]=0;
        
//         for(int i:c)
//             for(int j=0;j<m;++j)
//                 v[j][i]=0; 
//         */
        
//         //Alternative to above approach --> TC: O(2*(m*n))
//           for(int i=0;i<m;++i)
//             for(int j=0;j<n;++j)
//                 if(r.find(i)!=r.end() || c.find(j)!=c.end())
//                     v[i][j]=0;
        
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
    }
};