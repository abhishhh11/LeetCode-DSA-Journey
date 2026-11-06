class Solution {
public:
    int maxCoins(vector<int>& piles) {
        // int n = piles.size();
        // sort(piles.begin(), piles.end());
        // int j = piles.size()-1;
        // int ans = 0;
        // int cnt = 0;
        // while(j != 0) {
        //     ans += piles[j-1];
        //     j = j-2;
        //     cnt++;
        //     if(cnt == n/3) return ans;
        // }
        // return ans;

        //Using max heap

        int n = piles.size();
        priority_queue<int> pq(piles.begin(), piles.end());
        int ans = 0;
        int cnt = 0;
        int j = piles.size()-1;
        while(cnt <= n/3) {
            pq.pop();
            ans += pq.top();
            pq.pop();
            cnt++;
            if(cnt == n/3) return ans;
        }
        return ans;
    }
};