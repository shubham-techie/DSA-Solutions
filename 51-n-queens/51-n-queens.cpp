class Solution {
public:
    void helperSolve(int& n, int col, vector<string>& board, vector<vector<string>>& res, vector<int>& leftRow, vector<int>& upperDiagonal, vector<int>& lowerDiagonal){
        if(col==n){
            res.push_back(board);
            return;
        }
        
        for(int row=0;row<n;++row)
            if(leftRow[row] & lowerDiagonal[row+col] & upperDiagonal[n-1-row + col]){
                
                board[row][col]='Q';
                leftRow[row] = lowerDiagonal[row+col] = upperDiagonal[n-1-row + col]=0;
                
                helperSolve(n, col+1, board, res, leftRow, upperDiagonal, lowerDiagonal);
                
                board[row][col]='.';
                leftRow[row] = lowerDiagonal[row+col] = upperDiagonal[n-1-row + col]=1;
            }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        
        vector<string> board(n, string(n,'.'));
        vector<vector<string>> res{};

        vector<int> leftRow(n,1), upperDiagonal((n<<1)-1,1), lowerDiagonal((n<<1)-1,1);   //1 : that cell can be considered
        
        helperSolve(n, 0, board, res, leftRow, upperDiagonal, lowerDiagonal);
        return res;
    }
};