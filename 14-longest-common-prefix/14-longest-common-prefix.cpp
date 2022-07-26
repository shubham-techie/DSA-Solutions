class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pf=strs[0];
        
        for(int i=1;i<strs.size();++i){
            string s=strs[i], s1="";
            
            for(int j=0,k=0; j<pf.size() && k<s.size(); ++j, ++k){
                if(pf[j]==s[k])
                    s1+=pf[j];
                else
                    break;
            }
            pf="";
            pf=s1;
        }
        return pf;
    }
};