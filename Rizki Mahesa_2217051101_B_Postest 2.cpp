#include <iostream>
using namespace std;
int main(){
	int a, b, jumlah, kurang, kali, modulus;
	float bagi;
	
	//masukan angka A
	cout << "Masukkan nilai A: ";
	cin >> a;
	
	//masukan angka B
	cout <<"Masukkan nilai B: ";
	cin >> b;
	
	cout << "nilai A = " << a;
	cout << "\nnilai B = " << b;
	
	cout << endl;
	cout << "--------------------------------";
	
	//penjumlahan a + b
	jumlah = a + b;
	cout << "\nnilai A + B = " << jumlah;
	
	//pengurangan a - b
	kurang = a - b;
	cout << "\nnilai A - B = " << kurang;
	
	//perkalian a * b
	kali = a * b;
	cout << "\nnilai A * B = " << kali;
	
	//modulus atau sisa bagi a % b
	modulus = a % b;
	cout<<"\nnilai A % B = " << modulus;
	
	//pembagian a / b
	bagi =(float)a / b;
	cout<<"\nnilai A / B = " << bagi;
	
	return 0;
	
}
