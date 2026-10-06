class Solution {
public:
    int firstOccurrence(vector<int>& arr, int x){
        int low=0;
        int high=arr.size()-1;
        int first=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==x){
                first=mid;
                high=mid-1;
            }
            else if(arr[mid]<x){
                low=mid+1;
            }
            else high=mid-1;
        }
        return first;
    }

    int lastOccurrence(vector<int>& arr, int x){
        int low=0;
        int high=arr.size()-1;
        int last=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==x){
                last=mid;
                low=mid+1;
            }
            else if(arr[mid]<x){
                low=mid+1;
            }
            else high=mid-1;
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first= firstOccurrence(nums, target);
        if (first==-1) return {-1,-1};
        int last=lastOccurrence(nums, target);
        return {first, last};
    }
};