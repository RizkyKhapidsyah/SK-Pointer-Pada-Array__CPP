//------------------------------//
//Penggunaan Pointer to Array //
//------------------------------//

#include <conio.h>
#include <iostream>

using namespace std;

/* Created by Rizky Khapidsyah */

int main() {
	int i;
	int nilai[5];
	int* ptrnilai;
	
	ptrnilai = nilai;
	
	for (i = 1; i <= 5; i++) {
		cout << "Masukan Nilai Pertama = ";
		cin >> nilai[i];
	}

	cout << endl;
	cout << "Hasil Pengaksesan Elemen Array Lewat";
	cout << "Pointer";
	cout << endl << endl;

	for (i = 1; i <= 5; i++) {
		cout << "Elemen " << i << ". Nilai " << nilai[i];
		cout << ", Menempati Alamat Memori = ";
		cout << &ptrnilai[i];
		cout << endl;
	}

	_getch();
	return 0;
}