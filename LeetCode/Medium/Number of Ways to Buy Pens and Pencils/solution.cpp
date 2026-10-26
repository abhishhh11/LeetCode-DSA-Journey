class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        // int ans = 0;
        // if(total < cost1 && total < cost2) return 1;
        // if(total < cost1 && total > cost2) return total/cost2 + 1;
        // if(total < cost2 && total > cost1) return total/cost1 + 1;
        // else {
        //     ans += total/cost2 + 1;
        //     int i=1;
        //     while(total > 0) {
        //         total = total - i*cost1;
        //         ans += total/cost2 + 1;
        //         i++;
        //     }
        // }
        // return ans+1;

        long long ans = 0;
        for(int i=0;i*cost1<=total;i++) {
            ans += (total - i*cost1)/cost2 + 1;
        }
        return ans;
    }
};