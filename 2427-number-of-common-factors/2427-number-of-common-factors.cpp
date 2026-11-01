class Solution {
public:
    int commonFactors(int a, int b) {
        set<int> st;
        int ans = 0;
        for(int i=1;i<=a;i++) {
            if(a%i == 0) st.insert(i);
        }
        for(int i=1;i<=b;i++) {
            if(b%i == 0 && st.find(i) != st.end()) ans++;
        }
        return ans;
    }
};