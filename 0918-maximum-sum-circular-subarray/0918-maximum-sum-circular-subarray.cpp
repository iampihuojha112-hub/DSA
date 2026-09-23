class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=0;
        int n=nums.size();

        int currmax=0;
        int maxi=INT_MIN;
        int currmin=0;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            sum+=nums[i];

            currmax=max(nums[i], currmax+nums[i]);
            maxi=max(currmax, maxi);

            currmin=min(nums[i], currmin+nums[i]);
            mini=min(currmin, mini);
        }
        if(maxi<0) return maxi;

     return max(maxi, sum-mini);
    }
   
};