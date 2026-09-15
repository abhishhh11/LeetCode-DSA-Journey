class Solution {
public:
    // int maximumNumberOfStringPairs(vector<string>& nums) {
    //     int n = nums.size();
    //     int count = 0;
    //     for(int i =0;i<n-1;i++) {
    //         string rev = nums[i];
    //         reverse(rev.begin(), rev.end());
    //         for(int j=i+1;j<n;j++) {
    //             if(rev == nums[j]) count++;
    //         }
    //     }
    //     return count;
    // }

    int maximumNumberOfStringPairs(vector<string>& nums) {
        int n = nums.size();
        unordered_set<string> s;
        for(int i=0;i<n;i++) {
            s.insert(nums[i]);
        }
        int count = 0;
        for(int i=0;i<n;i++) {
            string rev = nums[i];
            reverse(rev.begin(), rev.end());
            if(rev == nums[i]) continue;
            if(s.find(rev) != s.end()) {
                count++;    
                s.erase(nums[i]);
            }
        }
        return count; 
    }

};