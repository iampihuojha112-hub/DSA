class Solution {
public:
    int expand(string &s, int left, int right){
        while(left>=0 && right<=s.length() && s[left]==s[right]){
            left--;
            right++;
        }
        return right-left-1;
    }
    string longestPalindrome(string s) {
        int start=0;
        int maxlen=0;
        for(int i = 0; i < s.length(); i++) {
             int oddlength= expand(s,i,i);
             int evenlength=expand(s, i,i+1);
             int len=max(oddlength, evenlength);
             if(len>maxlen){
                maxlen=len;
                start=i-(len-1)/2;
             }
        }
        return s.substr(start, maxlen);
    }
};