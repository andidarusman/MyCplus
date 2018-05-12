#include <iostream>
using namespace std;

main()
{
				int a = 21;
				int b = 10;
				int c ;

				if(a == b)
				{
								cout << "Line 1 - a is equal b" << endl;
				}
				else
				{
								cout << "Line 1 - a is not equal b" << endl;
				}

				if (a < b)
				{
								cout << "Line 2 - a les than b" << endl;
				}
				else
				{
								cout << "Line 2 - is not less than b" << endl;
				}

				if(a > b)
				{
								cout << "Line 3 - a lebih besar dari b " << endl;
				}
				else
				{
								cout << "Line 3 - a tidak lebih besar dari b" << endl;
				}

				/* ubah variabel a dan b */
				a = 5;
				b = 20;
				
				if (a <= b)
				{

							cout << "Line 4 - a as either  or equal to b" << endl;

				}

				if (b >= a)
				{
								cout << "Line 5 - " << endl;
				}

				return 0;
}
