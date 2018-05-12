#include <iostream>

using namespace std;

int main () 
{
				int bilangan ;
				char huruf ;

				cout << "input sebuah bilangan bulat : "; cin >> bilangan;

				if((bilangan > 0) && (bilangan < 10))
								cout << bilangan << "lebih besar dari nol dan lebih kecil dari sepuluh";

				cout << "input sebuah huruf : "; cin >> huruf;

				if((huruf == 'A') || (huruf == 'a') ||
												(huruf == 'B') || (huruf == 'b') ||
												(huruf == 'C') || (huruf == 'c')) 
				{
								cout << huruf << "adalah salah satu huruf ya";
				}	

				return 0;

}
