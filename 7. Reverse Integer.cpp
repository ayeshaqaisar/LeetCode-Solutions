class Solution {
public:
    int reverse(int x) {
        int n=x,r=0;
         if(n==0){
             return 0;
         }
        
        while(n){
            
            if(r > INT_MAX / 10){
                return 0;
            }
            if(r < INT_MIN / 10){
                return 0; 
            }
            r=r*10+n%10;
            n=n/10;
        }
    
        
        return r;
    }
};