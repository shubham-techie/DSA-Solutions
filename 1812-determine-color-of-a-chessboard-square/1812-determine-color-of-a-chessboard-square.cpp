class Solution {
public:
    bool squareIsWhite(string coordinates) {
        unordered_map<char,int>map(8);
        
        for(char c='a';c<='h';++c)
            map[c]=c - 'a'+1;
        
        int is_even=map[coordinates[0]]+(coordinates[1]-'0');

        if( !(is_even & 1 ))
            return false;
        return true;       
    }
};