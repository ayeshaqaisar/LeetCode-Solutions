class Solution {
public:
    
   
    
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector <bool> v;
        int x=0;
        for(int i=0;i<nums.size();i++){
            x=x*2+nums[i];
		    if(x%5==0){
              v.push_back(true);         
               }
            else v.push_back(false);
		x=x%5;
        }
        
        
        return v;
    }
};