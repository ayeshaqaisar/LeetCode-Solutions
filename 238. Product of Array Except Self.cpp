class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size();
        
        vector <int> a;
        int x=1;
        
        //keeping track of left side products
        for(int i=0;i<n;i++){
         x*=nums[i];
         a.push_back(x);
        }
       int rightProduct =1;
        

        for(int i=n-1;i>0;i--){ 
            a[i] = a[i-1] *rightProduct;
            rightProduct*=nums[i];
        }
        a[0]=rightProduct;//boundary case
        
        return a;
    }
};