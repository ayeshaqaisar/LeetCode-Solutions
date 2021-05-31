class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
       int m = obstacleGrid.size();
       int n = obstacleGrid[0].size();
       int dp[m][n];
        if(obstacleGrid[0][0] == 1) return 0;
       
        memset(dp,-1,sizeof(dp));
        bool f=0;
        for(int i=0;i<m;i++){
              
            if(f || obstacleGrid[i][0] == 1){
                f=1;
                 dp[i][0] =0;
            }
            else{
                  dp[i][0] =1;
            }
        }
        f=0;
        for(int i=0;i<n;i++){
                dp[0][i] =1;
                
            if(f || obstacleGrid[0][i] == 1){
                f=1;
                dp[0][i] =0;
            }
            else{
                  dp[0][i] =1;
            }
        }
        

        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
               if(obstacleGrid[i][j] == 1 )
                   dp[i][j]=0;
                else
                   dp[i][j]= dp[i][j-1] + dp[i-1][j];
           }
        }
        
        return dp[m-1][n-1];
    }
};