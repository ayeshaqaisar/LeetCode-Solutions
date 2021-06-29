class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        int t=32;
        vector <int> v;
        
        while(t--){
            int x = n&1;
            v.push_back(x);
            n= n>>1;
            
        }
        int num=0;
        for(int i=0;i<v.size();i++){
            num=num<<1;
            num = num | v[i]; 
        }


        return num;
    }
};