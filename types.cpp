#include <iostream>
using namespace std;

/* ini program menampilkan perbedaan antara
 * signed dan unsigned integer
 */

int main()
{
				short int i; //signed short integer
				short unsigned int j; //unsigned short integer

				j = 5000;
				i = j;
				cout << i << " " << j;

				return 0;
}
