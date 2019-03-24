#include "matrix.h"
#include <iostream>
using namespace std;

const double EPS = 1e-10;
void Matrix::initialize()
{
	p = new double*[rows_num];
	for (int i = 0; i < rows_num; ++i)
        {
		p[i] = new double[cols_num];
        }
}
Matrix::Matrix(int rows, int cols)
{
	rows_num = rows;
	cols_num = cols;
	initialize();
	for (int i = 0; i < rows_num; i++)
	{
		for (int j = 0; j < cols_num; j++)
            {
			p[i][j] = 0;
		    }
	}
}

Matrix::Matrix(int rows, int cols, double value)
{
	rows_num = rows;
	cols_num = cols;
	initialize();
	for (int i = 0; i < rows_num; i++) {
		for (int j = 0; j < cols_num; j++) {
			p[i][j] = value;
		}
	}
}

Matrix::~Matrix() {}
Matrix& Matrix::operator=(const Matrix& m)
{
	if (this == &m) {
		return *this;
	}

	if (rows_num != m.rows_num || cols_num != m.cols_num) {
		for (int i = 0; i < rows_num; ++i) {
			delete[] p[i];
		}
		delete[] p;

		rows_num = m.rows_num;
		cols_num = m.cols_num;
		initialize();
	}

	for (int i = 0; i < rows_num; i++) {
		for (int j = 0; j < cols_num; j++) {
			p[i][j] = m.p[i][j];
		}
	}
	return *this;
}

Matrix& Matrix::operator=(double *a){
	for(int i=0;i<rows_num;i++){
		for(int j=0;j<cols_num;j++){
			p[i][j]= *(a+i*cols_num+j);
		}
	}
	return *this;
}

Matrix& Matrix::operator+=(const Matrix& m)
{
	for (int i = 0; i < rows_num; i++) {
		for (int j = 0; j < cols_num; j++) {
			p[i][j] += m.p[i][j];
		}
	}
	return *this;
}

Matrix& Matrix::operator-=(const Matrix& m)
{
	for (int i = 0; i < rows_num; i++) {
		for (int j = 0; j < cols_num; j++) {
			p[i][j] -= m.p[i][j];
		}
	}
	return *this;
}

Matrix& Matrix::operator*=(const Matrix& m)
{
	Matrix temp(rows_num, m.cols_num);
	for (int i = 0; i < temp.rows_num; i++) {
		for (int j = 0; j < temp.cols_num; j++) {
			for (int k = 0; k < cols_num; k++) {
				temp.p[i][j] += (p[i][k] * m.p[k][j]);
			}
		}
	}
	*this = temp;
	return *this;
}

Matrix Matrix::operator*(const Matrix & m)const{
	Matrix ba_M(rows_num,m.cols_num,0.0);
	for(int i=0;i<rows_num;i++){
		for(int j=0;j<m.cols_num;j++){
			for(int k=0;k<cols_num;k++){
				ba_M.p[i][j]+=(p[i][k]*m.p[k][j]);
			}
		}
	}
	return ba_M;
}

Matrix Matrix::Solve(const Matrix &A, const Matrix &b)
{
	for (int i = 0; i < A.rows_num; i++) {
		if (A.p[i][i] == 0) {

			cout << "请重新输入" << endl;
		}
		for (int j = i + 1; j < A.rows_num; j++) {
			for (int k = i + 1; k < A.cols_num; k++) {
				A.p[j][k] -= A.p[i][k] * (A.p[j][i] / A.p[i][i]);
				if (abs(A.p[j][k]) < EPS)
					A.p[j][k] = 0;
			}
			b.p[j][0] -= b.p[i][0] * (A.p[j][i] / A.p[i][i]);
			if (abs(A.p[j][0]) < EPS)
				A.p[j][0] = 0;
			A.p[j][i] = 0;
		}
	}

	Matrix x(b.rows_num, 1);
	x.p[x.rows_num - 1][0] = b.p[x.rows_num - 1][0] / A.p[x.rows_num - 1][x.rows_num - 1];
	if (abs(x.p[x.rows_num - 1][0]) < EPS)
		x.p[x.rows_num - 1][0] = 0;
	for (int i = x.rows_num - 2; i >= 0; i--) {
		double sum = 0;
		for (int j = i + 1; j < x.rows_num; j++) {
			sum += A.p[i][j] * x.p[j][0];
		}
		x.p[i][0] = (b.p[i][0] - sum) / A.p[i][i];
		if (abs(x.p[i][0]) < EPS)
			x.p[i][0] = 0;
	}

	return x;
}

void Matrix::Show() const {
	for (int i = 0; i < rows_num; i++) {
		for (int j = 0; j < cols_num; j++) {
			cout << p[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void Matrix::swapRows(int a, int b)
{
	a--;
	b--;
	double *temp = p[a];
	p[a] = p[b];
	p[b] = temp;
}

double Matrix::det(){}
	double ** back_up;
	back_up=new double *[rows_num];
	for(int i=0;i<rows_num;i++){
		back_up[i]=new double[cols_num];
	}
	for(int i=0;i<rows_num;i++){
		for(int j=0;j<cols_num;j++){
			back_up[i][j]=p[i][j];
		}
	}
	if(rows_num!=cols_num){
		std::abort();
	}
	double ans=1;
	for(int i=0;i<rows_num;i++){
		if(abs(p[i][i])<=EPS){
			bool flag=false;
			for(int j=0;(j<cols_num)&&(!flag);j++){
				if((abs(p[i][j])>EPS)&&(abs(p[j][i])>EPS)){
					flag=true;
					double temp;
					for(int k=0;k<cols_num;k++){
						temp=p[i][k];
						p[i][k]=p[j][k];
						p[j][k]=temp;
					}
				}
			}
		if(flag)
			return 0;
		}
	}
	for(int i=0;i<rows_num;i++){
		for(int j=i+1;j<rows_num;j++){
			for(int k=i+1;k<cols_num;k++){
				p[j][k]-=p[i][k]*(p[j][i]*p[i][i]);
			}
		}
	}
	for(int i=0;i<rows_num;i++){
		ans*=p[i][i];
	}
	for(int i=0;i<rows_num;i++){
		for(int j=0;j<cols_num;j++){
			p[i][j]=back_up[i][j];
		}
	}
	return ans;
}

double Matrix::Point(int i, int j) const{
	return this->p[i][j];
}

Matrix Matrix::inv(Matrix A){
	if(A.rows_num!=A.cols_num){
		std::cout<<"只有方阵能求逆矩阵"<<std::endl;
		std::abort();
	}
	double temp;
	Matrix A_B=Matrix(A.rows_num,A.cols_num);
	A_B=A;
	Matrix B=eye(A.rows_num);

	for (int i = 0; i < A.rows_num; i++) {
		for (int j = 0; j < A.cols_num; j++) {
			if (abs(A.p[i][j]) <= EPS) {
				A.p[i][j] = 0;
			}
		}
	}

	for(int i=0;i<A.rows_num;i++){
		if(abs(A.p[i][i])<=EPS){
			bool flag=false;
			for(int j=0;(j<A.rows_num)&&(!flag);j++){
				if((abs(A.p[i][j])>EPS)&&(abs(A.p[j][i])>EPS)){
					flag=true;
					for(int k=0;k<A.cols_num;k++){
						temp=A.p[i][k];
						A.p[i][k]=A.p[j][k];
						A.p[j][k]=temp;
						temp=B.p[i][k];
						B.p[i][k]=B.p[j][k];
						B.p[j][k]=temp;
					}
				}
			}
			if(!flag){
				std::cout<<"逆矩阵不存在\n";
				std::abort();
			}
		}
	}

	double temp_rate;
	for(int i=0;i<A.rows_num;i++){
		for(int j=i+1;j<A.rows_num;j++){
			temp_rate=A.p[j][i]/A.p[i][i];
			for(int k=0;k<A.cols_num;k++){
				A.p[j][k]-=A.p[i][k]*temp_rate;
				B.p[j][k]-=B.p[i][k]*temp_rate;
			}
			A.p[j][i]=0;
		}
	}

	for(int i=0;i<A.rows_num;i++){
		temp=A.p[i][i];
		for(int j=0;j<A.cols_num;j++){
			A.p[i][j]/=temp;
			B.p[i][j]/=temp;
		}
	}

	for(int i=A.rows_num-1;i>=1;i--){
		for(int j=i-1;j>=0;j--){
			temp=A.p[j][i];
			for(int k=0;k<A.cols_num;k++){
				A.p[j][k]-=A.p[i][k]*temp;
				B.p[j][k]-=B.p[i][k]*temp;
			}
		}
	}
	std::cout<<"算法可靠性检测，若可靠，输出单位矩阵"<<std::endl;
	for(int i=0;i<A.rows_num;i++){
		for(int j=0;j<A.cols_num;j++){
			printf("%7.4lf\t\t",A.p[i][j]);
		}
		cout << endl;
	}
	A=A_B;
	return B;
}

Matrix Matrix::eye(int n){
	Matrix A(n,n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				A.p[i][j]=1;
			}else{
				A.p[i][j]=0;
			}
		}
	}
	return A;
}

int Matrix::row() const{
	return rows_num;
}
int Matrix::col() const{
	return cols_num;
}

Matrix Matrix::T(const Matrix & m)
{	int col_size=m.col();
	int row_size=m.row();
	Matrix mt(col_size, row_size);
	for (int i = 0; i <row_size; i++) {
		for (int j = 0; j <col_size; j++) {
			mt.p[j][i] = m.p[i][j];
		}
	}
	return mt;
}

Matrix Matrix::gaussianEliminate()
{
	Matrix Ab(*this);
	int rows = Ab.rows_num;
	int cols = Ab.cols_num;
	int Acols = cols - 1;

	int i = 0;
	int j = 0;
	while (i < rows)
	{
		bool flag = false;
		while (j < Acols && !flag)
		{
			if (Ab.p[i][j] != 0) {
				flag = true;
			}
			else {
				int max_row = i;
				double max_val = 0;
				for (int k = i + 1; k < rows; ++k)
				{
					double cur_abs = Ab.p[k][j] >= 0 ? Ab.p[k][j] : -1 * Ab.p[k][j];
					if (cur_abs > max_val)
					{
						max_row = k;
						max_val = cur_abs;
					}
				}
				if (max_row != i) {
					Ab.swapRows(max_row, i);
					flag = true;
				}
				else {
					j++;
				}
			}
		}
		if (flag)
		{
			for (int t = i + 1; t < rows; t++) {
				for (int s = j + 1; s < cols; s++) {
					Ab.p[t][s] = Ab.p[t][s] - Ab.p[i][s] * (Ab.p[t][j] / Ab.p[i][j]);
					if (abs(Ab.p[t][s]) <EPS)
						Ab.p[t][s] = 0;
				}
				Ab.p[t][j] = 0;
			}
		}
		i++;
		j++;
	}
	return Ab;
}

istream& operator>>(istream& is, Matrix& m)
{
	for (int i = 0; i < m.rows_num; i++) {
		for (int j = 0; j < m.cols_num; j++) {
			is >> m.p[i][j];
		}
	}
	return is;
}
