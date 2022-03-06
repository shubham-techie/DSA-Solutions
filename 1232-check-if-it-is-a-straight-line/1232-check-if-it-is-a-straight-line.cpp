class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        int x0=coordinates[0][0];
        int y0=coordinates[0][1];
        int dx=coordinates[1][0] - x0;
        int dy=coordinates[1][1] - y0;
        
        for(int i=2;i<coordinates.size();++i){
            
            auto v=coordinates[i];
            
            if((v[1]-y0)*dx!=(v[0]-x0)*dy)
                return false;
        }
        return true;
        
    }
};