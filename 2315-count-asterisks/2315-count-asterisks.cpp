class Solution {
public:
    int countAsterisks(string s) {
        bool ptr=true;
        int cnt{};
        
        for(int i=0;i<s.size();++i){
            if(s[i]=='|') ptr=!ptr;
            cnt = cnt + (ptr==true && s[i]=='*');
        }
        return cnt;
    }
};