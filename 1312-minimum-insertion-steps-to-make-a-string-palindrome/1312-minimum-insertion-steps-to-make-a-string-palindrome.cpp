class Solution {
public:
    int lcs(string s1){
        string s2=s1;
        reverse(begin(s2), end(s2));
        
        int n1=s1.size(), n2=s2.size();
        vector<vector<int>> dp(s1.size()+1, vector<int>(s2.size()+1,0));
        
        for(int i=1;i<=s1.size();++i)
            for(int j=1;j<=s2.size();++j)
                if(s1[i-1]==s2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
        
        return dp[n1][n2];
    }
    
    int minInsertions(string s) {
        return s.size()-lcs(s);
    }
};