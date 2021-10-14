#include <iostream>
using namespace std;

int penjumlahan(int a,int b){
	return a+b;
}
int pengurangan(int a,int b){
	return a-b;
}
int pembagian(int a,int b){
	return a/b;
}
int perkalian(int a,int b){
	return a*b;
}

int main(){
	
	int a;
	int b;
	
	cout << "Masukkan Nilai : ";
	cin >> a >> b;
	
	cout << "Hasil Penjumlahan : " << penjumlahan(a,b) << endl;
	cout << "Hasil Pengurangan : " << pengurangan(a,b) << endl;
	cout << "Hasil Pembagian : " << pembagian(a,b) << endl;
	cout << "Hasil Perkalian :" << perkalian(a,b) << endl;
}

