class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        priority_queue<int, vector<int>, greater<int> > pq;
        for(int i=0;i<prices.size();i++) {
            pq.push(prices[i]);
        }
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        if(money - (x+y) >= 0) return money - (x+y);
        else return money;
    }
};