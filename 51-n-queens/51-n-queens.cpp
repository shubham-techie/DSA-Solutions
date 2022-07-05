class Solution {
public:
    bool isValidPos(int& n, int row, int col, vector<string>& board){
        
        //checking in row
        for(int c=col;c>=0;--c)
            if(board[row][c]=='Q')
                return false;
        
        //checking in upper left diagonal
        for(int r=row, c=col;r>=0 && c>=0;--r,--c)
            if(board[r][c]=='Q')
                return false;
        
        //checking in lower left diagonal
        for(int r=row, c=col; r<n && c>=0; ++r, --c)
             if(board[r][c]=='Q')
                return false;
        
        //else
        return true;
    }
    
    void helperSolve(int& n, int col, vector<string>& board, vector<vector<string>>& res){
        if(col==n){
            res.push_back(board);
            return;
        }
        
        for(int row=0;row<n;++row)
            if(isValidPos(n, row, col, board)){
                board[row][col]='Q';
                helperSolve(n, col+1, board, res);
                board[row][col]='.';
            }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        
        vector<string> board(n, string(n,'.'));
        vector<vector<string>> res{};
        
        helperSolve(n, 0, board, res);
        return res;
    }
};