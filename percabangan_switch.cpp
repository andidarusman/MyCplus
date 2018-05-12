#include <iostream>

using namespace std;

int main () {
				int bil;

				cout << "masukkan sebuah angka 1 sampai 7 : ";
				cin >> bil;

				switch (bil) {
								case 1 : cout << "Hari ke-"<<bil<<" : hari Minggu ";
												 break;
								case 2 : cout << "Hari ke-"<<bil<<" : hari Senin ";
												 break;
								case 3 : cout << "Hari ke-"<<bil<<" : hari Selasa ";
												 break;
								case 4 : cout << "Hari ke-"<<bil<<" : hari Rabu ";
												 break;
								case 5 : cout << "Hari ke-"<<bil<<" : hari Kamis ";
												 break;
								case 6 : cout << "Hari ke-"<<bil<<" : hari Jumat ";
												 break;
								case 7 : cout << "Hari ke-"<<bil<<" : hari Sabtu ";
												break;
								default :cout << "Tidak ada hari ke- "<<bil;

				}
				return 0;
}
