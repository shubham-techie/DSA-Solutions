#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> v{intervals[0]};
        
        for(auto it:intervals){
            
            if(v.back()[1]>=it[0])
                v.back()[1]=max(v.back()[1],it[1]);
            else
                v.push_back(it);
        }
        
        return v;
    }
};


int main(){
    Solution s;
    vector<vector<int>>v {{1,3},{2,6},{8,10},{15,18}};
     v=s.merge(v);

     for(auto it:v)
        cout<<it[0]<<","<<it[1]<<"  ";
    
    return 0;
}