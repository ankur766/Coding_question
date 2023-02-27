class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size()-1;
        int indx=0;
        int i=0;
        while(i<=size)
        {
            if(nums[i]!=0)
            {
                nums[indx]=nums[i];
                indx++;
            }
            i++;
            
        }
        while(indx<=size)
        {
            nums[indx]=0;
            indx++;
        }
        
        int j=0;
        while(j<=size)
        {
            cout<<nums[j]<<" ";
            j++;
        }
        
        
    }
};