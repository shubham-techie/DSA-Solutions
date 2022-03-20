class Solution {
public:
    static bool greater(vector<int>& a,vector<int>& b){
        return a[1]>b[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int units{};
        int n=boxTypes.size();      
        
        sort(boxTypes.begin(),boxTypes.end(),greater);
        
        for(auto& it:boxTypes){
            int x=min(it[0],truckSize);
            units+=it[1]*x;
            truckSize-=x;
           
            if(!truckSize) break;
        }

        return units;
    }
};