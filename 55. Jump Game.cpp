class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int lastindex= nums.size()-1;
        //backtracking
        
        for(int i=nums.size()-1; i>=0;i--){
            if(i+nums[i] >= lastindex){
                lastindex =i;
            }
            
        }
        
        if(lastindex == 0){
            return 1;
        } 
        return 0 ;
        
    }
};