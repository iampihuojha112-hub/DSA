class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left;
        vector<int> right;
        vector<int> middle;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                left.push_back(nums[i]);
            }
            else if(nums[i]==pivot){
                middle.push_back(nums[i]);
            }
            else right.push_back(nums[i]);
        }
       for(auto it:left){
        ans.push_back(it);
       }
        for(auto it:middle){
        ans.push_back(it);
       }
        for(auto it:right){
        ans.push_back(it);
       }
       return ans;
    }
};