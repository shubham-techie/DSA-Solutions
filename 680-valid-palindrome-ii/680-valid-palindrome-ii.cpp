class Solution {
public:
    bool isPalindrome(string s,int low, int high){
        while(low<high)
            if(s[low]==s[high]){
                ++low;
                --high;
            }
            else
                return false;
        return true;
    }
    
    bool validPalindrome(string s) {
        
        int n=s.length(),low{},high{n-1},cnt{};
             
        if(n==1 || n==2)
              return true;
        
        while(low<high)
            if(s[low]==s[high]){
                ++low;
                --high;
            }
            else
                return isPalindrome(s,low+1,high) || isPalindrome(s,low,high-1);
        
        return true;
    }
};