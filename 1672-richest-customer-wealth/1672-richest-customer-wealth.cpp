class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
    int wealth=0;
        
        for(int i=0;i<accounts.size();i++)
            
        {int money=0;
         
             for(int j=0;j<accounts[i].size();j++)
             {
                 money=money+accounts[i][j];   
             }
         
         wealth=max(wealth,money);
         
        }
        return wealth;
        
    }
};