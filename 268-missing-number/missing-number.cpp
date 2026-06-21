class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n=nums.size();
      int sum=0;
      int total=0;
      for(int i=0;i<=n;i++)
      {
        sum=sum^i;
      } 
      for(int i=0;i<n;i++)
      {
        total=total^nums[i];
      } 
      int missing=0;
      missing=sum^total;
      return missing;
    }
};