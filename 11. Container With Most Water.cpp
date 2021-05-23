class Solution {
public:
    int maxArea(vector<int>& height) {
       
        int l=0;
        int r=height.size()-1;
         int maxa=(r-l)*min( height[l],height[r]);
        
        while(l<=r){
            int current =(r-l)*min( height[l],height[r]);
            maxa = max(maxa, current  );
            
            if(height[l]> height[r]){
                r--;
            }
            else{
                l++;
            }
            
        }
        
        return maxa;
    }
};