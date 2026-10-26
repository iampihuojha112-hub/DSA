class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs[0].length();i++){   //traverses the first string in array coz its considered as base string.
            for(int j=1;j<strs.size();j++){   //traverses each string in array          
                if(strs[j][i]!=strs[0][i] || i>=strs[j].length()){
                    return ans;
                }
            }
            ans+=strs[0][i];
        }
        return ans;
    }
};