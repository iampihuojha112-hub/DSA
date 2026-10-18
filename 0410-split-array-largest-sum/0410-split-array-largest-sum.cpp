class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(), nums.end());
        int high=0;
        for(int i=0;i<nums.size();i++){
            high+=nums[i];
        }
        int ans=high;
        while(low<=high){
            int mid=(low+high)/2;
            int split=1;
            int length=0;
            for(int i=0;i<nums.size();i++){
                if(length+nums[i]<=mid){
                    length+= nums[i];
                }
                else{
                    split++;
                    length=nums[i];
                }
            }
            if(split<=k){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};