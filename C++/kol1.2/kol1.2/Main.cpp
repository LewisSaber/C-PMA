#include "matrix.h"

template <typename T>
void test( matrix<T> B) {
 B.print();
}


int main() {
	matrix<double> A(5, 5);
	matrix<double> B(5, 5);
	A.fillrandom(32);
	B.fillrandom(32);
	cout << "A" << endl;
	A.print();
	cout << "B" << endl;
	B.print();
	matrix<double> C(5, 5);
	//C.fillrandom(100);
	//cout << C[0][0];
	
	//test(A + B);
	C = A + B;
	cout << "C: " << endl;
	C.print();
	
	
	



}