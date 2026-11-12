class Solution {
public:
    vector<string> mapping = {
        "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    void solve(string &digits, int index, string &temp, vector<string> &ans){
        if(index==digits.size()){
            ans.push_back(temp);
            return;
        }
        string letter=mapping[digits[index]-'0'];
        for(int i=0;i<letter.size();i++){
            temp.push_back(letter[i]);
            solve(digits, index+1, temp, ans);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string temp="";
        solve(digits, 0, temp, ans);
        return ans;
    }
};