class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        auto f=find(word.begin(),word.end(), ch);
                
        if(f!=word.end()){
            int idx= f-word.begin(); 
            reverse(word.begin(), word.begin()+idx+1);
        }
        return word;
    }
};