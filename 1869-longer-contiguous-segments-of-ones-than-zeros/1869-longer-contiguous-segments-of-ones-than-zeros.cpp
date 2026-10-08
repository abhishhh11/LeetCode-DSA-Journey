class Solution {
public:
    bool checkZeroOnes(string s) {
        long long mx=INT_MIN;
        long long mx1 = INT_MIN;
        long long c1 = 0;
        long long c0 = 0;
        int i=0;
        while(i < s.length()) {
            if(s[i] == '1') c1++;
            else {
                mx = max(mx, c1);
                c1=0;
            }
            i++;
        }
        mx = max(mx, c1);
        i=0;
        while(i < s.length()) {
            if(s[i] == '0') c0++;
            else {
                mx1 = max(mx1, c0);
                c0=0;
            }
            i++;
        }
        mx1 = max(mx1, c0);
        if(mx > mx1) return true;
        else return false;
    }
};