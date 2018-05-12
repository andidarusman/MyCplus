#include <iostream>
using namespace std;

//deklarasi variable global
int g;

int main()
{
	//deklarasi variable local
	int a, b;

	//inisialisasi variable yang digunakan
	a = 10;
	b = 20;

	//variable g ini bisa digunakan semua function 
	//karena variable g variable global
	g = a + b;

	//hasil keluaran dengan menggunakan variabel global
	cout << g;
	return 0;
}
