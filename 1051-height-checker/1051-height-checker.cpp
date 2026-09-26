class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int> ex;
        for(int i=0;i<h.size();i++) {
            ex.push_back(h[i]);
        }
        int cnt=0;
        sort(ex.begin(), ex.end());
        for(int i=0;i<h.size();i++) {
            if(h[i] != ex[i]) cnt++;
        }
        return cnt;
    }
};