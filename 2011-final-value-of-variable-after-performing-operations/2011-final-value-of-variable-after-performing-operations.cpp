class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int n = op.size();
        int cnt=0;
        unordered_map<string,int> mp;
        for(int i=0;i<n;i++) {
            mp[op[i]]++;
        }
        for(auto m : mp) {
            string y = m.first;
            int x = m.second;
            if(y == "--X" || y == "X--") cnt -= x;
            else if(y == "++X" || y == "X++") cnt += x;
        }
        return cnt;
    }
};