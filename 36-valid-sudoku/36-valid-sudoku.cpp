class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rowset(9);
        vector<unordered_set<char>> colset(9);
        vector<vector<unordered_set<char>>> square(3,vector<unordered_set<char>>(3));
        
        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j){
                char& a=board[i][j];
                
                if(a=='.') continue;
                
                if(rowset[i].find(a)!=rowset[i].end() || 
                   colset[j].find(a)!=colset[j].end() || 
                  square[i/3][j/3].find(a)!=square[i/3][j/3].end())
                    return false;
                
                rowset[i].insert(a);
                colset[j].insert(a);
                square[i/3][j/3].insert(a);
            }
        }
        
        return true;
    }
};