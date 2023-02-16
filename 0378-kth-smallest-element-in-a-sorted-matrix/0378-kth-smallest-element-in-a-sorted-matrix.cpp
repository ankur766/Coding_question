class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int temp[n*n] ;
        int point = 0;
        for(int i = 0; i<matrix.size(); i++){
            for(int j:matrix[i]){
                temp[point++] = j;
            }
        }
       sort(temp,temp+n*n);

        return temp[k-1];
    }
};