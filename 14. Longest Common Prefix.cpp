class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
          string ans="";
        if(strs.size()== 0){return ans;}
      
        

        int index=0;
        for(char c: strs[0]){
            for(int i=1;i<strs.size();i++){
                if(index >= strs[i].size() || c!=strs[i][index]) {
                    return ans;}
            }
            
            ans+=c;
            index++;
        }
   
                
        return ans;
        
    }
};