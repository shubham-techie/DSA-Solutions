class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int i=0, j=0, mx=0;
        unordered_set<char> st{};
        
        while(j<s.size()){
            if(st.count(s[j])==0){
                st.insert(s[j]);
                mx=max(mx, (int)st.size());  
                ++j;
            }
            else{
                st.erase(s[i]);
                ++i;
            }
        }
        return mx;
    }
};