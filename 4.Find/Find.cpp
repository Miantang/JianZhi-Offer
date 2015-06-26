class Solution {
public:
	bool Find(vector<vector<int> > array,int target) {
		int rowCount = array.size();
		int colCount = array[0].size();
		for (int i = colCount-1, j = 0; i >= 0 && j < rowCount; ) {
			if(array[i][j] == target) {
				return true;
			} else if(array[i][j] > target) {
				--i;
				continue;
			}else /*if(array[i][j] < target)*/ {
				++j;
				continue;
			}
		}
		return false;
	}
};