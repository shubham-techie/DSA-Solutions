class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int units{};
        int n=boxTypes.size();      
        
        for(auto& it:boxTypes)
            swap(it[0],it[1]);   
        
        sort(boxTypes.rbegin(),boxTypes.rend());
        
        for(auto& it:boxTypes){
            
            if(it[1]<=truckSize){
                units+=it[0]*it[1];
                truckSize-=it[1];
            }
            else{
                units+=it[0]*truckSize;
                break;
            }
        }
//         int i{};
//         while(truckSize && i<n){
//             auto& it=boxTypes[i];
//             if(it[1]==0){
//                 ++i;
//                 continue;
//             }
    
//             units+=it[0];
//             --truckSize;
//             --it[1];
//         }
        return units;
    }
};