class Solution {
public:
    string reverseWords(string s) {
        vector<string> s1;
        string words="";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' ') {
                words+=s[i];
            }
            else if(words != ""){
                s1.push_back(words);
                words="";
            }
        }
         if(words != "") {
            s1.push_back(words);
        }                            //last word because it doesn't have s
        
        int left=0;
        int right=s1.size()-1;
        while(left<right){
            swap(s1[left], s1[right]);
            left++;
            right--;
        }
        string ans="";
        for(int i=0;i<s1.size();i++){
            if(i>0) ans+=" ";
            ans+=s1[i];

        }       
         return ans;
    }
};