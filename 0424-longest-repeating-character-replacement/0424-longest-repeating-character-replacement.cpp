class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        int right=0;
        int freq[26]={0};
        int ans=0;
        while(right<s.size()){  
            freq[s[right]-'A']++;
            int maxfreq=0;
            for(int i=0;i<26;i++){
                maxfreq=max(maxfreq,freq[i]);
        }
            int windowsize=right-left+1;
            int changes=windowsize-maxfreq;
            while(changes>k){
                freq[s[left]-'A']--;
                left++;
                windowsize = right - left + 1;
                changes = windowsize - maxfreq;
            }
        ans=max(ans, right-left+1);
        right++;
        }
        return ans;
    }
};