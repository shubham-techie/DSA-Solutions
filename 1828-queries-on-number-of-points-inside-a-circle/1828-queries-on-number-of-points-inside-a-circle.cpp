class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        
        int i{-1};
        vector<int>res(queries.size());
        
        for(auto& query:queries){
            int cnt{};
            
            for(auto& point:points){
                float dist=pow(pow(point[0]-query[0],2)+pow(point[1]-query[1],2),0.5);
                if(dist<=query[2])
                    ++cnt;
            }
            res[++i]=cnt;
        }
        return res;
    }
};