class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN,csum=0;
        
        for(int i=0;i<nums.size();i++){
            csum=0;
            for(int j=i;j<nums.size();j++){
            csum +=nums[j];
                if(csum>sum){sum=csum;}
            
            
        }
        
            
        }
        
        return sum;
        
    }
};