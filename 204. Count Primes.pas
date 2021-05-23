class Solution {
public:
 
    
    int countPrimes(int n) {
        if(n<3) return 0;
        
        int a[n];
         memset(a,0,sizeof(a));
        
        for(int i=2;i<n;i++){
            if(a[i]==0){
                long long int j=( long long int)i*i;
                for(;j<n;j+=i){
                    a[j]=1;
                }
            }
        }
       int c=0;
      for(int i=2;i<n;i++){
         if(a[i]==0){c++;}
        }

        
        return c;
    }
};