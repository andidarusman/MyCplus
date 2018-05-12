#include <iostream>

using namespace std;

void BAGI(double X, double Y) {
				double HASIL;

				if (Y != 0) {
								HASIL = X/Y;
								cout<<"Hasil bagi = "<<HASIL<<" ";
				} else {
							throw Y;
				}

}

//fungsi utama
int main() {

				//deklarasi variabel a dan b dengan tipe double
				double a, b;

				try {
								cout<<"inputkan angka yang dibagi : ";
								cin>>a;
								cout<<"inputkan angka pembagi : ";
								cin>>b;
								cout<<endl;

								BAGI(a, b); //panggil fungsi bagi
				}
				catch (double E) {
								cout<<"Kesalahan : Terjadi pada pembagian dengan angka "<<E;
				}
				return 0;
}
/*program diatas proses jebab error dengan statemen2 yang telah didefinisikan
 * di dalam sebuah fungsi.
 *
 * jika program diatas memasukkan nilai variabel b yang lebih besar dari 0 maka
 * program akan berjalan sesuai dengan baik.
 * jika program diatas memasukkan varibel b yang bernilai nol, maka program akan 
 * menampilkan pesaan eror
 *

