class Solution {
public:
    long long minimumCost(int c1, int c2, int cB, int n1, int n2) {
        if(n1 == 0 && n2 == 0) return 0;
        long long mn = min(n1, n2);
        long long oc = mn * min(cB, c1+c2);
        long long cost = 0;
        if(mn == n1) {
            long long rem2 = n2 - mn;
            cost = rem2 * min(c2, cB);
        }
        else {
            long long rem1 = n1 - mn;
            cost = rem1 * min(c1, cB);
        }
        return oc + cost;
    }
};