[https://leetcode.com/problems/merge-intervals/]

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        /* Method 1: if top ele of curr interval is smaller than end ele of prev interval, then their must be overlapping.
        */
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> v{intervals[0]};
        
        for(auto& it:intervals){
            
            if(v.back()[1]>=it[0])
                v.back()[1]=max(v.back()[1],it[1]);
            else
                v.push_back(it);
        }
        
        return v;
        
      
    }
};
