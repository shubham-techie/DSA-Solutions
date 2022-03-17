class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int min_time{};
        
        for(int i=1;i<points.size();++i){
            auto& curr=points[i];
            auto& prev=points[i-1];
            
            min_time+=max(abs(prev[0]-curr[0]),abs(prev[1]-curr[1]));
        }
        
        return min_time;
    }
};