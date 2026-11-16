class Solution {
public:
    string digs(string s, int k) {
        string x = "";
        string ans = "";
        for(int i=0;i<s.length();i = i+k) {
            // if(i == s.length() - k) {
            //     x = s.substr(i+1, (s.length()-(i+1)));
            // }
            // else x = s.substr(i, k);
            int len = min(k, (int)(s.length()-i));
            x = s.substr(i, len);
            //long long y = stoll(x);
            int sum = 0;
            int j = 0;
            while(j < x.length()) {
                sum += (x[j] - '0');
                //y = y/10;
                j++;
            }
            ans += to_string(sum);
        }
        return ans;
    }
    string digitSum(string s, int k) {
        while(s.length() > k) {
            string m = digs(s, k);
            s = m;
        }
        return s;
    }
};