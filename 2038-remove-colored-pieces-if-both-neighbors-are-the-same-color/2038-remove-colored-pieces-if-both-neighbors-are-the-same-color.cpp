class Solution {
public:
    bool winnerOfGame(string colors) {
        int noOfMiddleWhites{}, noOfMiddleBlacks{};
        string s{colors};
        char A='A',B='B';
        
    for(int i=1;i<s.length()-1;++i){
        if(s[i]==A && s[i-1]==A && s[i+1]==A){
            ++noOfMiddleWhites;
        }
        else if(s[i]==B && s[i-1]==B && s[i+1]==B){
            ++noOfMiddleBlacks;
        }
    }

    if(noOfMiddleWhites>noOfMiddleBlacks) return true;
    else return false;
    }
};