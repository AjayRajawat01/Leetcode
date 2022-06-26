// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
    int solve(int* arr, int n, int dp[]){
        if(n<0) return 0;
        if(n==0) return arr[0];
        
        if(dp[n]!=-1) return dp[n];
        
        int incl = solve(arr, n-2, dp) + arr[n];
        int excl = solve(arr, n-1, dp);
        
        dp[n] = max(incl,excl);
        return dp[n];
    }
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    int dp[100001];
	    memset(dp,-1,sizeof(dp));
	    int ans  = solve(arr,n-1,dp);
	    return ans;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends