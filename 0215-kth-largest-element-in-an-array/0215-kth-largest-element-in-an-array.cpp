class Solution {
public:
// One more and best and optimal way is quick search TC = O(n)

    int findKthLargest(vector<int>& nums, int k) {
// TC = O(n*log(k))
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0;i<nums.size();i++) {
            pq.push(nums[i]);
            if(pq.size() > k) pq.pop();
        }
        return pq.top();
        // sort(nums.begin(),nums.end());
        // return nums[nums.size() - k];



    }
};