class Solution {
public:
    void rev(vector<char>& s,int low,int high){
        if(++low>=--high)
            return;

        swap(s[low],s[high]);
        rev(s,low,high);
    }
    
    void reverseString(vector<char>& s) {
        rev(s,-1,s.size());
    }
};