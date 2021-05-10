class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length()==0){return 0;}
        if(s.length()==1 && s[s.length()-1]==' '){return 0;}



        int l=0;
        int i=s.length()-1;
         
        while(s[i]==' ' && i>0){
          i--;
        }
        
       for(;i>=0 && s[i]!=' ';i--){
           
           if(s[i]!=' '){
          l++;
       
           }
           else{
               break;
           }
       
       
       }
        return l;
        
        
    }
};