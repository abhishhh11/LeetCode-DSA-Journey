class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mp;
        for(int i=0;i<text.length();i++) {
            mp[text[i]]++;
        }
        long long a, l, o, n;
        long long b=a=l=o=n=0;
        for(auto x : mp) {
            if(x.first == 'b') b = x.second;
            else if(x.first == 'a') a = x.second;
            else if(x.first == 'l') l = x.second;
            else if(x.first == 'o') o = x.second;
            else if(x.first == 'n') n = x.second;
        }
        if(l <= 1 || o <= 1) return 0;
        long long mns = min(b,min(a,n));
        long long mnd = min(l,o);
        long long x = mnd/2;
        return min(mns, x);

    }
};