class Solution {
public:
    bool winnerOfGame(string colors) {
        int noOfMiddleAs{}, noOfMiddleBs{};
        char A='A',B='B';
        
    for(int i=1;i<colors.length()-1;++i)
        if(colors[i]==A && colors[i-1]==A && colors[i+1]==A)      ++noOfMiddleAs;   
        else if(colors[i]==B && colors[i-1]==B && colors[i+1]==B) ++noOfMiddleBs;
  

    if(noOfMiddleAs>noOfMiddleBs) return true;
    else return false;
    }
};