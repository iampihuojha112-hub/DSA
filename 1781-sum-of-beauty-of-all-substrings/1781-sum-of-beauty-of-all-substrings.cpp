class Solution {
public:
    int beautySum(string s) {
        long long ans=0;
        for(int i=0;i<s.length();i++){
            long long freq[26]={0};
            for(int j=i;j<s.length();j++){
                freq[s[j]-'a']++;

                long long maxi=0;
                long long mini=INT_MAX;
                for(int k=0;k<26;k++){
                    if(freq[k]>0){
                        maxi=max(maxi, freq[k]);
                        mini=min(mini, freq[k]);
                    }
                }
                ans+=maxi-mini;
            }
        }
        return ans;
    }
};