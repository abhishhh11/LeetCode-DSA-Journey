class Solution {
public:
    int numberOfChild(int n, int t) {
        if(t < n) return t;
        else {
            if(t/(n-1)%2 == 0) return (t%(n-1));
            else return n - (t%(n-1)) -1;
        }
        return -1;
    }
};