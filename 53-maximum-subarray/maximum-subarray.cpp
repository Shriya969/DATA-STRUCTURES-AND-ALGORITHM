class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int maxsum=nums[0];
        for(int i=0;i<n;i++)
        {
           sum=max(nums[i],sum+nums[i]);
           maxsum=max(sum,maxsum);
        }
        return maxsum;
    }
};