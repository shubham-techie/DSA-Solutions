class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int is_even=coordinates[0]+coordinates[1];

        if( !(is_even & 1 ))
            return false;
        return true;       
    }
};