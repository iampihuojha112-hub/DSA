class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans ="";
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                if(count>0){
                    ans+=s[i];
                }
                count++;
            }
            else{
                count--;
                if(count>0){
                    ans+=s[i];
                }
                
            }
        }
        return ans;
    }
};

//for opening bracket-If count is zero, it means this is the outermost opening bracket, so we skip it.  Otherwise, we add it to the answer.

//for closing bracket - We first decrease the count.If it becomes zero, this is the outermost closing bracket, so we skip it. Otherwise, we add it.