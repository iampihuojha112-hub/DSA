class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxisum=0;
        int minisum=0;
        int maxi=0;
        int mini=0;
        for(int i=0;i<nums.size();i++){
            maxisum=max(nums[i], maxisum+nums[i]);
            minisum=min(nums[i], minisum+nums[i]);

            maxi=max(maxisum, maxi);
            mini=min(minisum, mini);

        }
        return max(abs(maxi), abs(mini));
    }
};


//The subarray can have a very large positive sum.
//The subarray can have a very large negative sum, whose absolute value becomes large.