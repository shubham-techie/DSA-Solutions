class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& it, vector<int>& nit) {
        int n=it.size();
        vector<vector<int>> v{};

        if(n==0 || (nit[0]<=it[0][0] && nit[1]>=it[n-1][1])){
            v.push_back(nit);
            return v;
        }
        
        if(nit[1]<it[0][0]){
            it.insert(it.begin(),nit);
            return it;
        }

        if(it[n-1][1]<nit[0]){
            it.push_back(nit);
            return it;
        }
            
        
        for(int k=0;k<n;++k){
 
            if(nit[1]<it[k][0]){
                v.push_back(nit);
                nit=it[k];
            }
            else if(nit[0]>it[k][1]){
                v.push_back(it[k]);
            }
            else{
                nit[0]=min(nit[0], it[k][0]);
                nit[1]=max(nit[1], it[k][1]);
            }
        }
        
        v.push_back(nit);
        return v;
    }
};