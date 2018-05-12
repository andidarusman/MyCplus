#include <iostream>

using namespace std;

int main() {
				double nilai;
				char indeks;

				//input nilai 
				cout<< " input nilai diperoleh : "; cin>>nilai;

				//konversi nilai menjadi nilai indeks
				if (nilai >= 85) {
								indeks = 'A';
				} else if (nilai >= 70) {
								indeks = 'B';
				} else if (nilai >= 55) {
								indeks = 'C';
				} else if (nilai >= 40) {
								indeks = 'D';
				} else {
								indeks = 'E';
				}

				cout<< " nilai indeks dari nilai "<<nilai<<" adalah "<<indeks<<" ";

				return 0;
}

