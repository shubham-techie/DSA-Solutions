class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int> map;
        
        for(int& i:target)
            ++map[i];
        
        for(int& i:arr){
            if(map[i]) --map[i];
            else return false;
        }
        
        return true;
    }
};