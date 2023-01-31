class Solution {
public:
    int reverse(int nums) // fun call for  reverse the element 
    {int a=0; // declare the v ar int a;
     while(nums)
     {a=a*10+nums%10;  
      nums=nums/10;
      
}
     return a; // return the reverse  number 
}
    int countDistinctIntegers(vector<int>& nums) {
        int n =nums.size(); // get size  of nums vector and store in int n;
        
        set<int>st; // declare set  to store uniqe value
        
        for(int i=0;i<n;i++) // using  for loop  i to n-1 boz  vecotr start index zero
        {int a=reverse(nums[i]); // fun call for take element in reverse  order
         nums.push_back(a); // after reversing the number the  push the element in vector nums 
        }
        
        for(int i =0;i<2*n;i++) // using for loop to insert element in set<int>st  and declare size of set is  double of                                      vector original vector size  . 
        {
            st.insert(nums[i]); // insert the element  . it store unique value not dupilcate value;
        }
        return st.size(); // return the size  of  set; 
        
        
    }
};