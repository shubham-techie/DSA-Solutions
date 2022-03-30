class Solution {
public:
    void reverse(vector<int>& v){
        int low{},high=v.size()-1;
        
        while(low<high){
            v[low]^=1;
            v[high]^=1;
            
            swap(v[low],v[high]);
            ++low;--high;
        }
        
        if(!(low^high))
            v[low]^=1;
    }
    
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        for(auto& i:image)
            reverse(i);
        
        return image;
    }
};