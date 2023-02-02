class Solution {
public:
    bool isPerfectSquare(int num) {
        long long   int start=0;
      long long  int end=num;
      long long  int ans=-1;
        while(start<=end){
           long long int mid=start+(end-start)/2;
         long long   int square=mid*mid;
        if(square==num){
            return 1;
        }
            else if(square<num){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return 0;
        
        
    }
};