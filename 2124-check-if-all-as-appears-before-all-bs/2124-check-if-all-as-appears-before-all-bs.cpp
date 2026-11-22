class Solution {
public:
    bool checkString(string s) {
        for(int i=0;i<s.length()-1;i++) {
            if(s.substr(i, 2) == "ba") return false;
        }
        return true;
    }
};