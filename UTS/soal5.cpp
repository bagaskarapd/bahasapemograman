#include <iostream>
using namespace std;
int main(){
	int a,b,jumlah,kurang,kali,bagi;
	cout<<"Masukkan angka pertama	: ";
	cin>>a;
	cout<<"Masukkan angka kedua 	: ";
	cin>>b;
	jumlah = a + b;
	kurang = a - b;
	kali = a * b;
	bagi = a / b;
	cout<<"Penjumlahan	: "<<jumlah<<endl;
	cout<<"Pengurangan	: "<<kurang<<endl;
	cout<<"Perkalian	: "<<kali<<endl;
	cout<<"Pembagian	: "<<bagi<<endl;
	return 0;
}