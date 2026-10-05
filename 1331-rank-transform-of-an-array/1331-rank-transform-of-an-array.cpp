class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans;
        vector<int> copy;
        unordered_set<int> st;
        for(int i=0;i<arr.size();i++) {
            st.insert(arr[i]);
        }
        for(auto x : st) {
            copy.push_back(x);
        }
        sort(copy.begin(), copy.end());
        //copy.erase(unique(copy.begin(), copy.end()), copy.end());
        unordered_map<int, int> mp;
        for(int i=0;i<copy.size();i++) {
            mp[copy[i]] = i+1;
        }
        for(int i=0;i<arr.size();i++) {
            if(mp.find(arr[i]) != mp.end()) ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};