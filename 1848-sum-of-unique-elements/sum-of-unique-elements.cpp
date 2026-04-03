class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        int frequency[101]={0};
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int num=nums[i];
            frequency[num]++;
        }
        for(int i=1;i<=100;i++)
        {
        if(frequency[i]==1)
        {
            sum=sum+i;
        }
        }
        return sum;
    }
};