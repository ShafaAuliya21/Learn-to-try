#include <iostream>
using namespace std;

int main(){
	
	cout << "Program Pertukaran" << endl;
	
	int A;
	int B;
	
	cout << "Nilai A & B : ";
	cin >> A >> B;
	
	A = A + B;
	cout <<"A :" << A << endl;
	B = A - B;
	cout <<"B :" << B << endl;
	A = A - B;
	cout <<"A :" << A << endl;
	
	cout <<"Nilai A  " << A <<" & Nilai B " << B << endl;
	
	return 0;	
}
