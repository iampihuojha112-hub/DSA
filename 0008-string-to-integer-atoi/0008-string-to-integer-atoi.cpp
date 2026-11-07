class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int sign=1;
        long long ans=0;
        while(i<s.length() && s[i]==' '){
            i++;
        }
        if(i<s.length() && s[i]=='-'){
            sign=-1;
            i++;
        }
        else if(i<s.length() && s[i]=='+'){
            i++;
        }
        while(i<s.length() && isdigit(s[i])){
            int digit = s[i]-'0';
            if(ans>INT_MAX/10){
                if(sign==1) return INT_MAX;
                else return INT_MIN;
            }
            if(ans==INT_MAX/10 && digit>7 && sign==1 ) return INT_MAX;
            if(ans==INT_MAX/10 && digit>8 && sign==-1 ) return INT_MIN;

            ans=ans*10+digit;
            i++;
        }
        return ans*sign;
    }
};