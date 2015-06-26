class Solution {
public:
	int jumpFloor(int n) {
		if(n <= 0)
			return 0;
		if(n == 1)
			return 1;
		if(n == 2)
			return 2;
		return jumpFloor(n-1) + jumpFloor(n-2);
	}
};