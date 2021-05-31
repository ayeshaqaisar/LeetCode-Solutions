class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
   
     int c=0;
        
    while(left != right){
        if(left == right) break;
        left = left>>1;
        right = right >>1;
        c++;

    }
    left =left<<c;   
    return left;
    
    }
};