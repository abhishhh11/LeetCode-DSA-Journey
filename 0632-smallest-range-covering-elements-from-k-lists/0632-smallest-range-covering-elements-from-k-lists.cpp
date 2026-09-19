class Solution {
public:
    typedef pair<int, pair<int,int>> pip;
    vector<int> smallestRange(vector<vector<int>>& arr) {
        priority_queue<pip, vector<pip>, greater<pip>> pq;
// pip -> pair of int and pair// and is type of {arr[row][col],{row,col}}
        int mx = INT_MIN;
        for(int i=0;i<arr.size();i++) {
            pq.push({arr[i][0],{i,0}});
            mx = max(mx, arr[i][0]);
        }
        int mn = pq.top().first;
        int end = mx;
        int start = mn;
        while(true) {
            int row = pq.top().second.first;
            int col = pq.top().second.second; 
            pq.pop();
            if(col == arr[row].size()-1) break;
            pq.push({arr[row][col+1],{row,col+1}});
            mn = pq.top().first;
            mx = max(mx, arr[row][col+1]);
            if(mx-mn < end-start) {
                start = mn;
                end = mx;
            }
        }
        return {start, end};
    }
};