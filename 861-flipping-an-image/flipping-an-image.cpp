class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
      vector<vector<int>> flipped(n,vector<int>(n));
      for(int i=0;i<n;i++)
      { 
        int k=n-1;
      for(int j=0;j<n;j++)
      {
        flipped[i][k] = image[i][j];
        k--;
      }
      }
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
            if(flipped[i][j]==0)
            {
                flipped[i][j]=1;
            }
            else
            {
                flipped[i][j]=0;
            }
        }
      }
      return  flipped;
    }
};