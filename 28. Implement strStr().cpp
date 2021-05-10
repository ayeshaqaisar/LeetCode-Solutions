class Solution {
public:
    int strStr(string haystack, string needle) {
       int n = haystack.length();
        int m = needle.length();
        
        
        for(int i=0;i<n-m+1;i++){
            string s = haystack.substr(i,m);

            if(s==needle)
                return i;
        }
        
        return -1;
        
    }
};