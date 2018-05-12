#include <iostream>

using namespace std;

int main () {
				int bil;

				cout << " input bil bulat untuk diperiksa ";

				cin >> bil ;

				if (bil > 0) {
								cout<<bil<<" ini bil positif  ";
				} else if (bil < 0) {
								cout<<bil<<" ini bil negatif ";
				} else {
								cout<< " anda input bil NOL  ";
				}

				return 0;

}
