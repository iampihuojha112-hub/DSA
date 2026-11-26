class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==first || nums[i]==second || nums[i]==third){
                continue;
            }
            else if(nums[i]>first){
                third=second;
                second=first;
                first=nums[i];
            }
            else if(nums[i]>second){
                third=second;
                second=nums[i];
            }
            else if(nums[i]> third){
                third=nums[i];
            }
            count++;
        }
        if(count<3){
            return first;
        }
        return third;
    }
};