class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int l=0;
        int r=n-1;
        int pos=n-1;
        vector<int> ans(n);
        while(l<=r){
            if(abs(nums[l])>abs(nums[r])){
                ans[pos]=nums[l]*nums[l];
                l++;
            }
            else{
                ans[pos]=nums[r]*nums[r];
                r--;
            }
            pos--;
        }

    return ans;
    }
};