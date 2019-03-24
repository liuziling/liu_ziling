#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
private:
	int rows_num, cols_num;
	double **p;
	void initialize();

public:
	Matrix(int, int);
	Matrix(int, int, double);
	virtual ~Matrix();
	Matrix& operator=(const Matrix&);
	Matrix& operator=(double *);
	Matrix& operator+=(const Matrix&);
	Matrix& operator-=(const Matrix&);
	Matrix& operator*=(const Matrix&);
	Matrix operator*(const Matrix & m)const;
	static Matrix Solve(const Matrix&, const Matrix&);
	void Show() const;
	void swapRows(int, int);
	double det();
	double Point(int i, int j) const;
	static Matrix inv(Matrix);
	static Matrix eye(int );
	int row() const;
	int col() const;
	static Matrix T(const Matrix & m);	Matrix gaussianEliminate();
	friend std::istream& operator>>(std::istream&, Matrix&);
};

#endif // MATRIX_H
