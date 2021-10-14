#include <iostream>
using namespace std;

int diskon1(int harga){
	return harga*10/100;
}
int diskon2(int harga){
	return harga*15/100;
}
int diskon3(int harga){
	return harga*20/100;
}

int main(){
	
	cout << "Nama  : Shafa Auliya" << endl;
	cout << "Kelas : A" << endl;
	cout << "NPM   : 2117051042" << endl;
	
	cout << "Membuat Program Belanja Buku di Toko Online Shafa" << endl;
	cout << endl;
	
	int harga;
	float diskon1;
	float diskon2;
	float diskon3;
	int jumlah;
	int uang;
	
	cout << "Harga Buku :";
	cin >> harga;
	
	if (harga <= 90000){
		diskon1 = harga*10/100; 
		jumlah  = harga-diskon1;
		cout << "Harga Buku Setelah Diskon : " << jumlah << endl;
	} 
	else if (harga >= 150000){
		diskon2 = harga*15/100;
		jumlah  = harga-diskon2;
		cout << "Harga Buku Setelah Diskon : " << jumlah << endl;
	}  
	else if (harga > 300000){
		diskon3 = harga*20/100;
		jumlah  = harga-diskon3;
		cout << "Harga Buku Setelah Diskon : " << jumlah << endl;
	}
	else {
		cout << "input eror" << endl;
	}
		
	cout << endl;
	
	cout << "Masukan Jumlah Uang : ";
	cin >> uang;
	
	cout << "Kembalian Uang : " << uang-jumlah << endl;  
		
}
