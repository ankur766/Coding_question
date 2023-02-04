class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans_store(nums.size());
        
            int even=0;
        
        int odd= 1;
        
        for(int i=0;i<nums.size();i++)
        { if (nums[i]>0)
        {
            ans_store[even]=nums[i];
            even+=2;
        }
         else{
              ans_store[odd]=(nums[i]);
             
            odd+=2;
}
}
        return ans_store;
        
        
        
    }
};