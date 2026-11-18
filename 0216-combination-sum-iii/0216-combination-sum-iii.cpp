class Solution {
public:
    vector<vector<int>> result;

    void f(int x, int k, int n, int i, vector<int> &subset) {
        
        if(n == 0) {
            if(subset.size() == x) result.push_back(subset);
            //result.push_back(subset);
            return;
        }
        if(i > 9) return ;

        if(n >= i) {
            subset.push_back(i);
            f(x, k-1, n-i, i+1, subset);
            subset.pop_back();
        }

        f(x, k, n, i+1, subset);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        int x = k;
        result.clear();
        vector<int> subset;
        f(x,k, n, 1, subset);
        return result;
    }
};