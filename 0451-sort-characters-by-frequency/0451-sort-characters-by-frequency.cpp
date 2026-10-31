class Solution {
public:
    string frequencySort(string s) {
       unordered_map<char, int> mpp;
       for(int i=0;i<s.length();i++){
        mpp[s[i]]++;
       } 
       priority_queue<pair<int,char>> pq;
       for(auto it:mpp){
        pq.push({it.second, it.first});
       }
       string ans= "";
       while(!pq.empty()){
        auto it=pq.top();
        pq.pop();
        ans+=string(it.first, it.second); //string(count, character);It creates a string containing the given character repeated count times.
       }
       return ans;
    }
};