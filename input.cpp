#include <iostream>
using namespace std;

int main()
{
				char S[20];

				cout << "masukkan nama anda :";

				//input user dengan fungsi getline
				cin.getline(S, sizeof(S) -1);

				// tampil nama yang telah di input
				cout << "hai  " << S <<", apa kabarmu?" << endl;

				return 0;
}
