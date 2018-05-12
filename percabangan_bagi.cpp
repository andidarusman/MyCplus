#include <iostream>
#include <iomanip>

using namespace std;

int main () 
{
				double X, Y, Z;

				//input bilangan
				cout << " masukkan bilangan yang akan di bagi ";
				cin >> X;

				cout << " masukkan bilangan yang di bagi  ";
				cin >> Y;

				//hindari pembagian dengan angka 0
				if (Y == 0) {
								cout << " salah : bilangan bagi tak boleh nol";
				} else {
								//melakukan proses bagi  bilangan x dan Y
								Z = X/Y;

								//set presisi dengan 2 angka di belakang koma
								cout.precision == 2;

								//tampil hasil bagi
								cout << " hasil bagi "<<Z;
				}
				return 0;

}
