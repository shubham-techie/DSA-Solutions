class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> small,great;
        int pivotCnt{};
        
        for(int& i:nums){
            if(i<pivot) small.emplace_back(i);
            else if(i>pivot) great.emplace_back(i);
            else ++pivotCnt;
        }
        
        while(pivotCnt--)
            small.emplace_back(pivot);
        
       small.insert(small.end(),great.begin(),great.end());
        return small;
    }
};