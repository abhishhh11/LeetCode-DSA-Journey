class Solution {
public:
    // bool isAnagram(string s, string t) {
    //     if(s.length() != t.length()) return false;
    //     unordered_map<char,int> mp1;
    //     unordered_map<char,int> mp2;
    //     for(int i=0;i<s.length();i++) {
    //         mp1[s[i]]++;
    //     }
    //     for(int i=0;i<t.length();i++) {
    //         mp2[t[i]]++;
    //     }
    //     for(auto x : mp1) {
    //         char ch1 = x.first;
    //         int freq1 = x.second;
    //         if(mp2.find(ch1) != mp2.end()) {
    //             int freq2 = mp2[ch1];
    //             if(freq1 != freq2) return false; 
    //         }
    //         else return false;
    //     }
    //     return true;
    // }

    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++) {
            mp[s[i]]++;
        }
        for(int i=0;i<t.length();i++) {
            char ch = t[i];
            if(mp.find(ch) != mp.end()) {
                mp[ch]--;
                if(mp[ch] == 0) mp.erase(ch);
            }
            else return false;
        }
        if(mp.size() > 0) return false;
        else return true;
    }

};