class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        // if(num==0)
        // {
        //     return true;
        // }
    for(int i=0;i<=num;i++) // travel for <num
    {
        int nums1=i ,nums_for_rev =nums1 ,rev=0; 
        while(nums_for_rev!=0) // reverse the num when num is not =zero if equal to zero then  break the loop 
        {
            rev=rev*10+nums_for_rev%10; // store lst digit of the nums
            nums_for_rev/=10; 
            
        }
        if(nums1+rev==num) // check  origanal number + after reversing number is == nums  then we return true accoring to question 
        {
            return true;
        }
        
    }
        return false; // return false if condition is not satisfied
        
    }
    
};