class Solution{   
public:
    typedef long long int lli;
    lli dp[50001][4];
    lli helper(int idx,int n,vector<vector<int>>&colors,int prevColor)
    {
        if(idx>=n)
        {
            return 0;
        }
        if(dp[idx][prevColor+1]!=-1)
        {
            return dp[idx][prevColor+1];
        }
        lli ans=1e11;
        for(int i=0;i<3;i++)
        {
            if(i!=prevColor)
            {
                lli temp=colors[i][idx]+helper(idx+1,n,colors,i);
                ans=min(ans,temp);
            }
        }
        return dp[idx][prevColor+1]=ans;
    }
    long long int distinctColoring(int N, int r[], int g[], int b[]){
        // code here 
        vector<vector<int>>color(3,vector<int>(N));
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<N;i++)
        {
            color[0][i]=r[i];
            color[1][i]=g[i];
            color[2][i]=b[i];
        }
        return helper(0,N,color,-1);
    }
};
