class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
          int rowsize=matrix.size();
        int colsize=matrix[0].size();
        
        vector<int> rowsZero;
         vector<int> colZero;
        
        
        for(int i=0;i<rowsize;i++)
        { 
            for(int j=0;j<colsize;j++)
        { 
                if(matrix[i][j]==0)
                { rowsZero.push_back(i);
                 colZero.push_back(j);
                    
                }
            
        }
            
        }
        
        
        for(int i=0;i<rowsZero.size();i++)
        {
            int index= rowsZero[i];
            for(int j=0;j<colsize;j++)
            {
                matrix[index][j]=0;
            }
        }
        
        
        
         for(int i=0;i< colZero.size();i++)
        {
            int index=  colZero[i];
            for(int j=0;j<rowsize;j++)
            {
                matrix[j][index]=0;
            }
        }
        
        
    }
};