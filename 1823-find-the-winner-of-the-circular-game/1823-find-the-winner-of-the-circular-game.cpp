class Solution {
public:
//     void  solve(vector<int>v,int k, int index,int &ans)
//     {int n=v.size();
//         if(v.size()==1)
//         {
//             ans=v[0];
//             return ;
//         }
//         index=(index+k)% v.size();
//         v.erase(v.begin()+index);
//         solve(v,k,index,ans);
       
//     }
    
//     int findTheWinner(int n, int k) {
//         vector<int>v;
//         for(int i=1;i<=n;i++)
//         {v.push_back(i);
            
//         }
//         k--;
//         int index=0;
//         int ans=0;
//          solve(v,k,index,ans);
        
//         return ans;}
    int solve(int n,int k)
    {
        if(n==1)
        {
            return 0;
        }
        return (solve(n-1,k)+k)%n;
    }
    int findTheWinner(int n, int k) {
        int ans=solve(n,k)+1;
         return  ans;
    }
    
};