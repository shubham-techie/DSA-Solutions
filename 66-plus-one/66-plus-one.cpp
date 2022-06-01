class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        
        if(digits[n-1]<9){
            ++digits[n-1];
            return digits;
        }
        else if(count(begin(digits), end(digits),9)==n){
            digits.clear();
            digits.resize(n+1,0);
            digits[0]=1;
            return digits;
        }
        else{ //there is one digit which is not 9
            for(auto it=digits.end();it--!=digits.begin();)
                if(*it==9)
                    *it=0;
                else{
                    ++*it;
                    break;
                }
        }
        
        return digits;
    }
};