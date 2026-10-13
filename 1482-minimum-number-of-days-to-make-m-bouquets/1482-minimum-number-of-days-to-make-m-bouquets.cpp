class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=*min_element(bloomDay.begin(), bloomDay.end());
        int high=*max_element(bloomDay.begin(), bloomDay.end());
        int ans=high;
        int n=bloomDay.size();
        if(n<(long long)m*k) return -1;
        while(low<=high){
            int mid=(low+high)/2;
            int cnt=0;
            int noOfbouquets=0;
            for(int i=0;i<n;i++){
                if(bloomDay[i]<=mid){
                    cnt++;

                    if(cnt==k){
                        noOfbouquets++;
                        cnt=0;
                    }
                }
                else{
                    cnt=0;
                } 
            }
            if(noOfbouquets>=m){
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