class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat[0].size();
        long long sum=0;

        for(int i=0;i<mat.size();i++){
            if(i == m-i-1)  sum -= mat[i][i];
            sum = sum +  mat[i][i] + mat[i][m-i-1]; 
        }
        return sum;
        
    }
};