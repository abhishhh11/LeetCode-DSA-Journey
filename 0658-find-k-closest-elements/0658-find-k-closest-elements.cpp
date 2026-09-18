class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        int n = arr.size();
        //pair<int, int> p;
        priority_queue< pair<int, int> > pq;
        for(int i=0;i<n;i++) {
            int dist = abs(arr[i] - x);
            pair<int, int> p = {dist, arr[i]};
            pq.push(p);
            if(pq.size() > k) pq.pop();
        }
        while(pq.size() > 0) {
            int ele = pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};