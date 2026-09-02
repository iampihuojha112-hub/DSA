class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0, r=0, maxlength=0;
        int n=fruits.size();
        map<int,int>mpp;
        while(r<n){
            mpp[fruits[r]]++;
            while (mpp.size()>2){
                mpp[fruits[l]]--;
                
                if(mpp[fruits[l]]==0){
                    mpp.erase(fruits[l]);
                }
                l++;
            }
            maxlength=max(maxlength, r-l+1);
            r++;
            
        }
        return maxlength;
    }
};