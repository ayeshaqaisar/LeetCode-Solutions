class Solution {
public:
    int mySqrt(int x) {
        if(x<2){
            return x;
        }
        //Binary search 
        //The answer will be between 0 and the number x
        int l=1,r=x,ans=0;
        while(l<=r){
            int m= l +(r-l)/2;
            //Taking care of overflow
            if(m==x/m){return m;}
            if(m>=x/m){r=m-1; }
            if(m<=x/m){l=m+1; ans=m;}
            
            
        }
        
        return ans;
        
        
        
    }
};