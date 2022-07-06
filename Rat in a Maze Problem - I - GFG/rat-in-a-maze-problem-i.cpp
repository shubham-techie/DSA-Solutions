// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void findPaths(vector<vector<int>> &maze, string move, vector<vector<int>> &visited, vector<string>& res, int row, int col, int n){
        if(row==n-1 && col==n-1){
            res.push_back(move);
            return;
        }
        
        string dir="DLRU";
        int dirRow[] = {1,0,0,-1};
        int dirCol[] = {0,-1,1,0};
        
        for(int dirIdx=0;dirIdx<4;++dirIdx){
            
            int nextRow = row+dirRow[dirIdx];
            int nextCol = col+dirCol[dirIdx];
            
            if(nextRow>=0 && nextRow<n && nextCol>=0 && nextCol<n && !visited[nextRow][nextCol] && maze[nextRow][nextCol]){
                visited[row][col]=1;
                findPaths(maze, move+dir[dirIdx], visited, res, nextRow, nextCol, n);
                visited[row][col]=0;
            }    
        }
        
        
        /*
        //down
        if(row+1<n && !visited[row+1][col] && maze[row+1][col]){
            visited[row][col]=1;
            findPaths(maze, move+'D', visited, res, row+1, col, n);
            visited[row][col]=0;
        }
        
        //left
        if(col-1>=0 && !visited[row][col-1] && maze[row][col-1]){
            visited[row][col]=1;
            findPaths(maze, move+'L', visited, res, row, col-1, n);
            visited[row][col]=0;
        }
        
        //right
        if(col+1<n && !visited[row][col+1] && maze[row][col+1]){
            visited[row][col]=1;
            findPaths(maze, move+'R', visited, res, row, col+1, n);
            visited[row][col]=0;
        }
        
        //up
        if(row-1>=0 && !visited[row-1][col] && maze[row-1][col]){
            visited[row][col]=1;
            findPaths(maze, move+'U', visited, res, row-1, col, n);
            visited[row][col]=0;
        }
        */
    }
    
    vector<string> findPath(vector<vector<int>> &maze, int n) {
        // Your code goes here
        if(maze[0][0]==0 || maze[n-1][n-1]==0) return {};
        
        vector<string> res{};
        vector<vector<int>> visited(n, vector<int>(n,0));
        
        findPaths(maze, "", visited, res, 0, 0, n);
        return res;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends