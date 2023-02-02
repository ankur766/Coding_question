class Solution {
public:
    int mySqrt(int x) {
     long long   int start=0;
      long long  int end=x;
      long long  int ans=-1;
        while(start<=end){
           long long int mid=start+(end-start)/2;
         long long   int square=mid*mid;
        if(square==x){
            return mid;
        }
            else if(square<x){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
};