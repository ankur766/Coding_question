class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
      int sum_of_original_vect=accumulate(nums.begin(), nums.end(), 0);
        
        int sum_of_after_extract_digit=0;

        for(int i=0;i<nums.size();i++)

        {
            
            while(nums[i]>0)
        
        {
            int extract_digit= nums[i]%10;
             nums[i] /=10;
                sum_of_after_extract_digit+=extract_digit;
            
        }
            
        }
    
            
        return abs(sum_of_after_extract_digit-sum_of_original_vect);
    }
};