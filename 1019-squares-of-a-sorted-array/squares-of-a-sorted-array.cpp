 class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        int pos=n-1;
        int right;int left;
        vector<int> result(n);
      while(i<=j)
      {
      left=nums[i]*nums[i];
      right=nums[j]*nums[j];
      if(left>right)
      {
        result[pos--]=left;
        i++;
      }
      else
      {
        result[pos--]=right;
        j--;
      }
    }
    return result;
    }
        };