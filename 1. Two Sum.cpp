class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         int diff= 0,j;
        vector <int>ans;
            unordered_set <int> st(nums.begin(), nums.end());
           for(int i=0;i<nums.size();++i){
               diff=target-nums[i];
               if(st.count(diff)){
               if(st.find(diff)!=st.end()){
                   j=distance(st.begin(), st.find(diff));
                   ans.push_back(i);
                    ans.push_back(j);
               
                   break;
               }
               }
               
               diff=0;
               
           }
        
        
        
        
        
         return ans; 
    }

};