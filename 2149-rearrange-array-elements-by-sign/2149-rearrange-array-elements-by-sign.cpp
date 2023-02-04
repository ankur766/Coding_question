class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int>ans_store(nums.size()); // decalre vector  eqal to size of nums
        
            int even=0;
        
        int odd= 1;
        
        for(int i=0;i<nums.size();i++) 
        { if (nums[i]>0)                // check nums[i]is npostive then store in even inex
        {
            ans_store[even]=nums[i];
            even+=2;
        }
         else{
              ans_store[odd]=(nums[i]);// if not is even  then it is store in odd index  number of  ans_store vector 
             
            odd+=2; // odd will  increment by 2 
}
}
        return ans_store;  // lst return answer
        
        
        
    }
};