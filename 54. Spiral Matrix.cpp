class Solution {
public:

    
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    
    int top=0;
    int bottom=  matrix.size()-1;
    int left =  0;
    int right = matrix[0].size()-1;
    int size = matrix.size() * matrix[0].size();
        
    vector <int> v;
        
        while(  v.size() < size ){
            for(int i=left; i<=right && v.size()<size ;i++){
                v.push_back(matrix[top][i]);
            }
            top++;
             for(int i=top; i<=bottom && v.size()<size ;i++){
                v.push_back(matrix[i][right]);
            }
            right--;
            for(int i=right; i>=left && v.size()<size ;i--){
                v.push_back(matrix[bottom][i]);
            }
            bottom--;
           for(int i=bottom; i>=top && v.size()<size ;i--){
                v.push_back(matrix[i][left]);
            }
            left++;
            
        }
       
    
        
        
        
        
    return v;
    }
};