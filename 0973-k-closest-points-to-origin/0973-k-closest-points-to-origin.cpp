class Solution {
public:
    typedef pair<int, vector<int>> piv;
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        int m = arr[0].size();        
        vector<vector<int>> ans;
        priority_queue<piv> pq;
        for(vector<int> v : arr) {
            int x = v[0];
            int y = v[1];
            int dist = x*x + y*y;
            //pair<int, int> pa = {arr[i][j], arr[i][j+1]}
           // pair<int, int> p = ;
            pq.push({dist, v});
            if(pq.size() > k) pq.pop();
        }
        while(pq.size() > 0) {
            vector<int> v = pq.top().second;
            //int sEle = pq.top().third;
            ans.push_back(v);
            pq.pop();
        }
        return ans;
    }
};