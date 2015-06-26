class Solution {
public:
	string replaceSpace(string str) {
		int i = 0;
		while(i < str.size()) {
			if(str[i] == ' ') {
				str.replace(i, 1, "%20");
				i += 3;
			} else {
				++i;
			}
		}
		return str;
	}
};