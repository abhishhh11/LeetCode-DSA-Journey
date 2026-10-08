class Solution {
public:
    int maxPower(string s) {
        long long c = 1;
        long long mx = INT_MIN;
        int i = 0;
        while(i < s.length()-1) {
            if(s[i] == s[i+1]) c++;
            else {
                mx = max(mx, c);
                c = 1;
            }
            i++;
        }
        mx = max(mx, c);
        return mx;
    }
};