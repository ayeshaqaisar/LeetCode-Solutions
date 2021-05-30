class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m =matrix.size();
        int n= matrix[0].size();
        
        bool marked[m][n];
        memset(marked,false,sizeof(marked));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               if(matrix[i][j] == 0){
                   marked[i][j]= true;
               }
            
            
          }
        }
        
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               if(marked[i][j] == true){
                   for(int c=0;c<n;c++){
                     if(  marked [i][c] != true){  
                          matrix[i][c]=0;
                       
                     }
                   }
                    for(int r=0;r<m;r++){
                      if(  marked[r][j] != true){  
                         matrix[r][j]=0;

                      }
                   }
                  matrix[i][j] =0;
               marked[i][j]=true;

               }
            
            
          }
        }
        

    
    
    }
};