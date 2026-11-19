class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        long long maxi=0;
        int m=accounts.size();
        for(int i=0;i<m;i++){
            long long sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};