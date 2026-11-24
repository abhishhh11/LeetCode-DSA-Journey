class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c <= 2) return true;
        //if(c == 3) return false;
        long long num = sqrt(c);
        long long i=0;
        while(i <= num) {
            if(i*i + num*num > c) num--;
            if(i*i + num*num == c) return true;
            i++;
        }
        return false;
    }
};