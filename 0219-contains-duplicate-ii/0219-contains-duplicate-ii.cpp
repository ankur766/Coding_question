class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int ,int> unordr_map;
        
        for(int i =0;i<nums.size();i++)
            
        {if(unordr_map.count(nums[i])>0 && abs(unordr_map[nums[i]]-i)<=k)
        {
            return true;
        }
         unordr_map[nums[i]]=i;
         
}
        return false;
        
    }
};