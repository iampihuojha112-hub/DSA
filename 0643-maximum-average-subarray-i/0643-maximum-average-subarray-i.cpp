class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        long long sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        long long msum=sum;
        for(int i=k;i<n;i++){
            sum+=nums[i];
            sum-=nums[i-k];

            msum=max(sum, msum);
        }
        return (double)msum/k;
    }
};