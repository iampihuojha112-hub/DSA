class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l=0;
        int prod=1;
        int cnt=0;
        if(k<=1) return 0;
        for(int i=0;i<nums.size();i++){
            prod*=nums[i];

            while(prod>=k){
                prod/=nums[l];
                l++;
            }
            cnt+=(i-l+1);
        }
        return cnt;
    
    }
};