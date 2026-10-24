class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        if(words[0][0] != s[0]) return false;
        string a = "";
        for(int i=0;i<words.size();i++) {
            //string b = "";
            a += words[i];
            // int m = a.length();
            // b = s.substr(0, m);
            if(a == s) return true;

        }
        return false;
    }
};