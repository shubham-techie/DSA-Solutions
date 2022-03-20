class Solution {
public:
    bool winnerOfGame(string colors) {
        int nA{}, nB{};
        char A='A',B='B';
        
    for(int i=1;i<colors.length()-1;++i)
        if(colors[i]==colors[i-1] && colors[i]==colors[i+1])
            if(colors[i]==A) 
                ++nA;
            else
                ++nB;
  

    return nA>nB;
    }
};