class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
      int m=mat.size();
      int sum=0;
      for(int i=0;i<m;i++)
      {//sum of primary diagonal
        sum=sum+mat[i][i];
        //secondary diagonal
        sum=sum+mat[i][m-1-i];
      }
      //remove double counted middle element(only if odd size)
      if(m%2==1)
      {
        sum=sum-mat[m/2][m/2];
      }
      return sum;
    }
};