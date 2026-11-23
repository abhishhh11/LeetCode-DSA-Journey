class Solution {
public:
    bool isVowel(char ch) {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') return true;
        else return false;
    }
    string sortVowels(string s) {
        string t = "";
        for(int i=0;i<s.length();i++) {
            if(isVowel(s[i])) t += s[i];
        }
        sort(t.begin(), t.end());
        int i=0;
        int j=0;
        while(j < t.length()) {
            if(isVowel(s[i])) {
                s[i] = t[j];
                i++;
                j++;
            }
            else i++;
        }
        return s;
    }
};