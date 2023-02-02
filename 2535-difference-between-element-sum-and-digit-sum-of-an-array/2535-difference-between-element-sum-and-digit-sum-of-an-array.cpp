class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
       vector<int>num2; // declare vector;

        for(int i=0;i<nums.size();i++)

        {
            int temp_var=nums[i]; 
            while(temp_var>0)
        
        {
            int extract_digit= temp_var%10; // extrat digit from number
             temp_var /=10;  
            num2.push_back(extract_digit); // push the digit in vector_num2
        }
            
        }
    
            
        return abs(accumulate(nums.begin(), nums.end(), 0)-accumulate(num2.begin(), num2.end(), 0)); //  using stl get sum of vector of nums  and sum of vector of nums2 && differnce b/w nums and num2
    }
}; 

