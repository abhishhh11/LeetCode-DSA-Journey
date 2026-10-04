class Solution {
public:
    string mapWordWeights(vector<string>& word, vector<int>& w) {
        
        string ans = "";
        for(auto x : word) {
            int sum = 0;
            for(auto ch : x) {
                int a = ch - 'a';
                sum += w[a];
            }
            ans += 'z' - (sum%26);
        }
        return ans;
    }
};