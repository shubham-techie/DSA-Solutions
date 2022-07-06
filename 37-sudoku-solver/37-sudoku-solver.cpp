class Solution {
public:
    bool solve(vector<vector<char>>& board){
        for(int i=0;i<board.size();++i)
            for(int j=0;j<board[0].size();++j)
                if(board[i][j]=='.'){
                    
                    for(char c='1';c<='9';++c)
                        if(isValidNumber(board, i, j, c)){
                            board[i][j]=c;
                            
                            if(solve(board)) return true;
                            else             board[i][j]='.';
                        }
                    return false;
                }
        return true;
    }
    
    bool isValidNumber(vector<vector<char>>& board, const int row, const int col, const char c){
        int subboard_startrow_idx=3* (row/3);
        int subboard_startcol_idx=3* (col/3);
        
        for(int i=0;i<9;++i){
            
            if(board[row][i]==c)
                return false;
            
            if(board[i][col]==c)
                return false;
            
            if(board[subboard_startrow_idx +i/3][subboard_startcol_idx + i%3]==c)
                return false;
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};