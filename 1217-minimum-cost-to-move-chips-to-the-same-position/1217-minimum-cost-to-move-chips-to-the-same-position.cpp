class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int oddCnt{},evenCnt{};
        
        for(int& it:position)
            it&1?++oddCnt:++evenCnt;
        return min(oddCnt,evenCnt);
    }
};