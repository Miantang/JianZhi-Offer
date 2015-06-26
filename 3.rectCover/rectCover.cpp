class Matrix {
public:
	int m00, m01, m10, m11;
	Matrix(int _m00, int _m01, int _m10, int _m11) {
		m00 = _m00;
		m01 = _m01;
		m10 = _m10;
		m11 = _m11;
	}
	Matrix() {
		m00 = 1;
		m01 = 1;
		m10 = 1;
		m11 = 0;
	}
	friend Matrix operator*(Matrix& a, Matrix& b) {
		Matrix m;
		m.m00 = a.m00 * b.m00 + a.m01 * b.m10;
		m.m01 = a.m00 * b.m01 + a.m01 * b.m11;
		m.m10 = a.m10 * b.m00 + a.m11 * b.m10;
		m.m11 = a.m10 * b.m01 + a.m11 * b.m11;
		return m;
	}
};
Matrix MatrixPower(int n) {
	Matrix m;
	if(n == 1) {

	}else if(n%2 == 0) {
		m = MatrixPower(n/2);
		m = m * m;
	}else if(n%2 == 1) {
		m = MatrixPower((n-1)/2);
		m = m * m;
		Matrix tempm;
		m = m * tempm;
	}
	return m;
}
class Solution {
public:
	int rectCover(int n) {
		if(n <= 0)
			return 0;
		if(n == 1)
			return 1;
		Matrix res = MatrixPower(n);
        return res.m00;
	}
};