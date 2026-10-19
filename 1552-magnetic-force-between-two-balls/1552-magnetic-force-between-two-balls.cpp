class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int n=position.size();
        sort(position.begin(), position.end());
        int low=0;
        int high= (position[n-1]-position[0]);
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            int ball=1;
            int last=position[0];
            for(int i=1;i<n;i++){
                if(position[i]-last>=mid){
                    ball++;
                    last=position[i];
                }
            }
            if(ball>=m){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
            }
};