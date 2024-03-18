class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (j == 1 || nums[i] != nums[j - 2]) {
                nums[j++] = nums[i];
            }
        }
        return j;
//         int count =0;
//         int i=0;
//         int j=0;
        
//        while(i<nums.size())
//        {
//            if(nums[i]==nums[j])
//            {
//                count++;
//                j++;
//            }
//            else if(nums[i]!=nums[j] && count>2)
//            {
//                 while(count!=2)
//                 {
//                     nums.erase(nums.begin() + i);
//                     count--;
//                     i++;
//                 }
//                count=0;
//                i=j;
//            }
//        }
    
        
        
    }
};