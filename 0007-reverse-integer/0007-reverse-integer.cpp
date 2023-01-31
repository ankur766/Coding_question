class Solution {
public:
    int reverse(int x) 
    {
        long r=0;      // decleare r 
        while(x){
         r=r*10+x%10; // find reminder and add its to r
         x=x/10; 
            
    }
        if(r>INT_MAX || r<INT_MIN)
            return 0;
        return r;
    }
};