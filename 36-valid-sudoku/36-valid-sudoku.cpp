typedef vector<unordered_set<char>> vu;
#define fd(set, ele) set.find(ele)!=set.end()
#define ins(set, ele) set.insert(a)

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vu rs(9);
        vu cs(9);
        vector<vu> sq(3,vu(3));
        
        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j){
                
                char& a=board[i][j];
                if(a=='.') continue;
                
                if(fd(rs[i], a) || fd(cs[j], a) || fd(sq[i/3][j/3], a))
                    return false;
                
                ins(rs[i], a);
                ins(cs[j], a);
                ins(sq[i/3][j/3], a);
            }
        }
        
        return true;
    }
};