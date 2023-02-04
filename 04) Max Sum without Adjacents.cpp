class Solution{
public:
    int findMaxSum(int *arr, int n) {
        vector<int>A(arr,arr+n);
        vector<int>dp(n+1,-1);
        int ans = solve(0,n,A,dp);
        return ans;
    }
    int solve(int pos,int n,vector<int>&A,vector<int>&dp){
        if(pos>=n) return 0;
        if(dp[pos]!= -1) return dp[pos];
        return dp[pos] = max(A[pos]+solve(pos+2,n,A,dp),solve(pos+1,n,A,dp));
    }
};
