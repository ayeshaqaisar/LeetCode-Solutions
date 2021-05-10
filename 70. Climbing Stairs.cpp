class Solution {
public:
    int climbStairs(int n) {
        if(n==1 ){
            return 1;
        }
        int dp[n+1];
        dp[0]=1;  // 1 way to climb 0 number of stairs
        dp[1]=1;
        for(int i=2;i<n+1;i++){
          //No of ways to climb ith step = 1 step + 2 step 
          dp[i] =dp[i-1] +dp[i-2]; 
            
        }
        return dp[n];
    }
};