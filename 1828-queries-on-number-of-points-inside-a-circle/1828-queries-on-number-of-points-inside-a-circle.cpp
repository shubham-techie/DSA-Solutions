class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        sort(points.begin(), points.end());
        
        int n=queries.size(), i{-1};
        vector<int> res(n,0);
            
        for(auto& v:queries){
            int sum{};
            auto it=lower_bound(points.begin(), points.end(), vector<int>{v[0]-v[2], 0});

            for(; it!=points.end(); ++it){
                if((*it)[0] > v[0]+v[2])
                    break;
                else if(pow((*it)[0]-v[0], 2) + pow((*it)[1]-v[1],2) <=pow(v[2], 2)){
                    ++sum;
                }
                
            }
            
            res[++i]=sum;
        }
        
        return res;
    }
};