class Solution {
    public int maxArea(int[] ht) {
        int mx_water=0, l=0, r=ht.length-1;
        
        while(l<r){
            int mn_ht=Math.min(ht[l], ht[r]);
            mx_water= Math.max(mx_water,(r-l)*mn_ht);
            
            while(l<r && ht[l]<=mn_ht) ++l;
            while(l<r && ht[r]<=mn_ht) --r;
        }
        return mx_water;
    }
}