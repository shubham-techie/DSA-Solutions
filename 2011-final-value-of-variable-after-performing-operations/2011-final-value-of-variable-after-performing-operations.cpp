class Solution {
public:
    int finalValueAfterOperations(vector<string>& s) {
       int val{};
        
        for(string & s1:s){
            if(s1[0]=='+' || s1[2]=='+') ++val;
            else --val;
        }
        return val;
    }
};