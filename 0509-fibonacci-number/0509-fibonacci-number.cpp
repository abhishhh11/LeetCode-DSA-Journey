class Solution {
public:
    int myFib(int n) {
        if(n<2) return n;
        else return myFib(n-1) + myFib(n-2);
    }

    int fib(int n) {
        return myFib(n);
    }
};