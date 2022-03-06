#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
     
        int small_dis{numeric_limits<int>::max()},idx{-1};
        
        for(int i=0;i<points.size();++i){
            
            vector<int> it=points[i];
            
            if(it[0]==x || it[1]==y){
           int dis=abs(x-it[0])+abs(y-it[1]);
            
            if(small_dis>dis)
            {
                small_dis=dis;
                idx=i;
            }
            }
        }
        
        return idx;
    }
};


int main(){
    Solution s;

    vector<vector<int>> v{{1,2},{3,1},{2,4},{2,3},{4,4}};
    cout<<s.nearestValidPoint(3,4,v);
    return 0;
}