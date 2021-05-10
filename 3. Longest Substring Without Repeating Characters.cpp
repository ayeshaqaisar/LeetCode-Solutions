class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       // total 256 characters
        vector <int> a(256, -1);
        // vector a stores the latest position of characters
        int maxlen =0,start =-1;
        for(int i=0;i<s.length();i++){
            if(a[s[i]] > start){
               start= a[s[i]];
            }
            
             a[s[i]] =i;
            
             maxlen = max(maxlen , i-start);            
            
        }
        return maxlen;
    }
};