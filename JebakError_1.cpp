#include <iostream>

using namespace std;

int main(){
				int X;

				try {
								cout<<"input bilangan bulat positif : ";
								cin>>X;

								if (X <= 0) {
												throw X;
								} else {
												cout<<"Nilai yang di input adalah : "<<X<<" ";
								}
				}
				catch (int E) {
								cout<<"program menangkap eksepsi dengan nilai : "<<;
								cout<<E;
				}

				return 0;
}
/*contoh diatass menggunakan tipe data yang sama yaitu int
 * jika program di atas dijalankan dan input nilai positif (lebih besar dari 0)
 * maka program akan berjalan dengan baik.
 * jika program di atas dijalankan dan input nilai positif (lebih kecil dari 0):
 * maka program akan menagngkap nilai yang salah
 */
