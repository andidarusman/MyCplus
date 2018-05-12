#include <iostream>

//function deklarasi
void func(void);

static int count = 10; /* variable global */

main ()
{
				while(count--)
				{
								func();
				}
				return 0;

}

//funtion di definisikan
void func( void )
{
				static int i = 5; //variable local static
				i++;
				std::cout << "i is " << i;
				std::cout << "and count is" << count << std::end1;
}
