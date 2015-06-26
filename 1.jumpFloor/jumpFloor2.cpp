class Solution {
public:
	int jumpFloor(int n) {
		if(n <= 0)
			return 0;
		if(n == 1)
			return 1;
		int res = 0;
		int first = 0;
		int second = 1;
		for (int i = 1; i <= n; ++i) {
			res = first + second;
			first = second;
			second = res;
		}
        return res;
	}
};