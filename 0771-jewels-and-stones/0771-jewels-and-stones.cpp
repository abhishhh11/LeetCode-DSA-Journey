class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int,int> mp;
        for(int i=0;i<stones.size();i++) {
            mp[stones[i]]++;
        }
        int ans = 0;
        for(int i=0;i<jewels.size();i++) {
            char ch = jewels[i];
            if(mp.find(jewels[i]) != mp.end()) {
                ans += mp[jewels[i]];
            }
        }
        return ans;
    }
};