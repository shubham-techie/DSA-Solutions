class Solution {
    List<List<Integer>> res=new ArrayList<>();
    
    void solve(List<Integer> l, int[] nums, int t, int idx){
        if(idx==nums.length){
            if(t==0)
                res.add(new ArrayList<>(l));
            return;
        }
        
        if(t<0)
            return;
        
        l.add(nums[idx]);
        solve(l, nums, t-nums[idx], idx);
        l.remove(l.size()-1);
        
        solve(l, nums, t, idx+1);
    }
    
    public List<List<Integer>> combinationSum(int[] nums, int t) {
                
        solve(new ArrayList<Integer>(), nums, t, 0);
        return res;
    }
}