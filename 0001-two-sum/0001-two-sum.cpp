class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int>index;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             for(int j=i+1;j<nums.size();j++)
//             {if(nums[i]+nums[j]==target)
//             {
//               index.push_back(i);
//                 index.push_back(j);
//             }
//             }
//         }
//         return index;
        unordered_map<int, int> mp;
   
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
      for(int i=0;i<nums.size();i++)
        {
            int y=target-nums[i];
            if(mp.find(y)!=mp.end())
            {
                if(i!=mp[y])
                return { i,mp[y]};
            }
        }
        return {0,0};
  
    }
};