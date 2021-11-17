#include<iostream>
using namespace std;
int main(){
	int n, j, i, s;
	cout << "Masukkan jumlah baris : ";
	cin >> n; //berguna untuk memasukkan nilai n
	for (i = 1; i <= n; i++){ //nilai i dimulai dari 1 dan akan berulang sampai ke-n kalinya
		for (s = i; s < n; s++){ //nilai s dimulai dari i dan akan berulang sampai ke-n kalinya
			cout << " "; //berguna untuk menampikan " "
			for (j = 1; j <= i; j++){ //nilai j dimulai dari 1 dan akan berulang sampai ke-i kalinya
				cout << "*"; //berguna untuk menampikan ""
				cout << "\n"; //berguna untuk masuk ke baris baru
			}
		}
	}
	return 0;
}