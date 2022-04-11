// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int numRay[], int arr_size) {
        // code here
         for (int i = 0; i < arr_size; i++) {
        numRay[numRay[i] % arr_size]= numRay[numRay[i] % arr_size] + arr_size;
    }
    
    vector<int> v{};
    
    for (int i = 0; i < arr_size; i++) {
        if (numRay[i] >= arr_size * 2) {
            v.emplace_back(i);
        }
    }
    if(!v.size()){
        v.emplace_back(-1);
    }
    return v;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends