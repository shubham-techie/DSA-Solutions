class Solution {
public:
    void sortArray(vector<int>& v){
        sort(begin(v),end(v));
    }
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
       /*
       unordered_map<int,int> map;
        
        for(int& i:target)
            ++map[i];
        
        for(int& i:arr){
            if(map[i]) --map[i];
            else return false;
        }
        
        return true;
        */
        
        sortArray(target);
        sortArray(arr);
        
        for(int i=0;i<arr.size();++i)
            if(target[i]!=arr[i])
                return false;
        
        return true;
    }
};