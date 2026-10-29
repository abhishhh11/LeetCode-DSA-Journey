class Solution {
public:
    string trimTrailingVowels(string s) {
        int idx = -1;
        for(int i=s.length()-1;i>=0;i--) {
            if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
                idx = i;
                break;
            }
        }
       return s.substr(0, idx + 1);
    }
};