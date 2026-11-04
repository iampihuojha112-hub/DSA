class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();

        if(n > m) return false;

        int freq[26] = {0};
        int window[26] = {0};

        for(int i = 0; i < n; i++) {
            freq[s1[i] - 'a']++;
            window[s2[i] - 'a']++;
        }

        for(int i = 0; i <= m - n; i++) {

            if(i > 0) {
                window[s2[i - 1] - 'a']--;
                window[s2[i + n - 1] - 'a']++;
            }

            bool match = true;

            for(int j = 0; j < 26; j++) {
                if(freq[j] != window[j]) {
                    match = false;
                    break;
                }
            }

            if(match) return true;
        }

        return false;
    }
};