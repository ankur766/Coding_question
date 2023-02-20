class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
//         int count=0;
//         //  time complexity is O(n 2);
//         for(int i=0;i<nums.size();i++)
//         {
//             for(int j=i+1;j<nums.size();j++)
                
//         {
//                 for(int k=j+1;k<nums.size();k++)
//         {
//                     if(nums[j]-nums[i]==diff && nums[k]-nums[j]==diff )
//                     {
//                         count++;}
//         }
                
//         }
//         }
//         return count;
             //  using set;
        set<int>s(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {if(s.find(nums[i]-diff)!=s.end() && s.find(nums[i]-2*diff)!=s.end())
        { ans++;
           
        }
         
        }
        return ans;
      
        
    }
};