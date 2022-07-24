class Solution {
    public int myAtoi(String s) {
        Boolean sign=false;
        int dg=0;
        int i=0, n=s.length();
        
        while(i<n && s.charAt(i)==' ') ++i;
        if(i<n && (s.charAt(i)=='-' || s.charAt(i)=='+')) sign= (s.charAt(i++)=='-');
        
        while(i<n && s.charAt(i)>='0' && s.charAt(i)<='9'){
            if(dg>Integer.MAX_VALUE/10 || (dg==Integer.MAX_VALUE/10 && (s.charAt(i)-'0')>Integer.MAX_VALUE%10))
                if(sign) return Integer.MIN_VALUE;
                else return Integer.MAX_VALUE;
            
            dg= dg*10 + (s.charAt(i)-'0');
            
            // if(dg>Integer.MAX_VALUE)
            //     if(sign) return Integer.MIN_VALUE;
            //     else return Integer.MAX_VALUE;
            ++i;
        }     
    
        if(sign) dg=-dg;
        return (int)dg;
    }
}