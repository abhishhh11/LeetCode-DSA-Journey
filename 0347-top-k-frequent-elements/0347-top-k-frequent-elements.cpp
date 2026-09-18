class Solution {
public:
    typedef pair<int, int> pi;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        // map pair is {ele,freq}
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++) {
            mp[nums[i]]++;
        }
        vector<int> ans;
        // heap pair is freq, ele
        priority_queue<pi, vector<pi>, greater<pi> > pq;
        for(auto x : mp) {
            int ele = x.first;
            int freq = x.second;
            pair<int, int> p = {freq, ele};
            pq.push(p) ;
            // pq.push({x.second, x.firsst})
            if(pq.size() > k) pq.pop();
        }
        while(pq.size() > 0) {
            int ele = pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        return ans;
    }
};