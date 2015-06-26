class Solution {
public:
    int jumpFloorII(int n) {
        if(n == 1) {
            return 1;
        }else {
            return 2 * jumpFloorII(n-1);
        }
    }
};