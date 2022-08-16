class Solution {
public:
    int live_count(vector<vector<int>>& bd, int r, int c){
        int cnt=0;
        int m=bd.size(), n=bd[0].size();

        for(int i=r-1;i<=r+1;++i){
            for(int j=c-1;j<=c+1;++j){
                if(i>=0 && i<m && j>=0 && j<n){
                    if(i==r && j==c)
                        continue;
                    if(bd[i][j])
                        ++cnt;
                }
            }
        }
        return cnt;
    }
    
    void gameOfLife(vector<vector<int>>& bd) {
        int r=bd.size(), c=bd[0].size();
        
        vector<vector<int>> res(r, vector<int>(c));
        res=bd;
 
        for(int i=0;i<r;++i){
            for(int j=0;j<c;++j){
                int cnt=live_count(bd, i, j);
                cout<<cnt;
                if(bd[i][j]){
                    if(cnt>3 || cnt<2)
                        res[i][j]=0;
                }
                
                else{
                    if(cnt==3)
                        res[i][j]=1;
                }
            }
        }
        
        bd=res;
    }
};