class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
       vector<int>num2;

        for(int i=0;i<nums.size();i++)

        {
            int temp_var=nums[i];
            while(temp_var>0)
        
        {
            int extract_digit= temp_var%10;
             temp_var /=10;
            num2.push_back(extract_digit);
        }
            
        }
    
            
        return abs(accumulate(nums.begin(), nums.end(), 0)-accumulate(num2.begin(), num2.end(), 0));
    }
};