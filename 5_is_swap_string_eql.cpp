#include<bits/stdc++.h>
using namespace std;

class Solution{
        public:
    bool areAlmostEqual(string s1, string s2) {
        
        if(s1==s2)
            return true;
        
        int diff_idx{0};
        vector<int> v;
        
        for(int i=0;i<s1.length();++i){
            
            if(diff_idx>2)
                return false;
            
         if(s1[i]!=s2[i])
         {
             v.push_back(i);
            ++diff_idx;
             
         }
        }        
        return (diff_idx==0 || diff_idx==2) && (s1[v[0]]==s2[v[1]]) && (s2[v[0]]==s1[v[1]]);
    }
};


int main(){
    Solution s;
    cout<<boolalpha<<s.areAlmostEqual("bank","kanb");
    return 0;
}