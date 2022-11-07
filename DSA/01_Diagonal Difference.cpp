
int diagonalDifference(vector<vector<int>> arr) {
   int n=arr[0].size();
   int i=-1,sum=0;
   
   while(++i<n){
       sum+=arr[i][i]-arr[i][n-1-i];
    //    ++i;
   }
    
    return abs(sum);
}
