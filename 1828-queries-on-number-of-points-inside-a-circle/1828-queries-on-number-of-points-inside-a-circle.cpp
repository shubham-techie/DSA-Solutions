class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        
        int n=queries.size(), i{-1};
        vector<int> res(n,0);
            
        for(auto& v:queries){
            int sum{};
            
            for(auto& p:points){
                if(sqrt(pow(v[0]-p[0],2)+pow(v[1]-p[1], 2)) <=v[2])
                    ++sum;
            }
            
            res[++i]=sum;
        }
        
        return res;
    }
};