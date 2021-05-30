class Solution {
public:
    
    int getBit(int n,int pos){
        return((n & (1<< pos))!=0);
    }
        
   int countBits( int n){
     int count = 0;
      while (n){
         count++;
         n >>= 1;
      }
      return count;
   }
    
    bool hasAlternatingBits(int n) {
        
        int s=countBits(n);
        for(int i=0;i<s-1;i++){
            if(getBit(n,i) == getBit(n,i+1)){return false;}
            
        }
        
        return true;
    }
};