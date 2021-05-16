class Solution {
public:

    vector<int> countBits(int num) {
        
        vector <int> v;
        v.push_back(0);
        for(int i=1;i<=num;i++){   
             int c=0,n=i;
             while(n!=0){
                 if(n & 1 == 1 ){
                      c++;
                   }
              
                 n=n>>1;
             }
            v.push_back(c);
           
        }
        
        
        return v;
    }
};