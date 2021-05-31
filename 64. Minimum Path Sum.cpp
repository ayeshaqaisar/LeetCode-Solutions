class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
       int m = grid.size();
       int n = grid[0].size();
       int dp[m][n];
        
        int sum=grid[0][0];
        dp[0][0]=sum;
        for(int i=1;i<m;i++){
                sum = sum + grid[i][0];
                dp[i][0] = sum;
        }
        sum=0;
        for(int i=0;i<n;i++){
                sum += grid[0][i];  
                dp[0][i] = sum;
        }
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){

                dp[i][j]=  grid[i][j] + min(dp[i][j-1] , dp[i-1][j]);
           }
        }
         return dp[m-1][n-1];
        
    }
};