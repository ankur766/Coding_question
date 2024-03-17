class Solution {
public:
    void   swapnumber(vector<int>& nums,int j,int k)
    {
        int a=nums[j];
        nums[j]=nums[k];
        nums[k]=a;
    }
    void sortColors(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size()-i-1;j++)
            {
                if(nums[j]>nums[j+1])
                {
                    swapnumber( nums,j,j+1);
                }
            }
        }
    }
};