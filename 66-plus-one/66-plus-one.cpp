class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        
        for(auto it=digits.end();it--!=digits.begin();){
            if(*it==9)
                *it=0;
            else if(*it<9){
                ++*it;
                return digits;
            }
        }
        
        digits.insert(digits.begin(),1);
        return digits;
    }
};