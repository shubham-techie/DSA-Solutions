class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& it, vector<int>& nit) {
        int n=it.size();
        vector<vector<int>> v{};

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