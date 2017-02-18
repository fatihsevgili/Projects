#include <stdio.h>

int main(int argc, char const *argv[])
{
	union var
	{
		int a;       // hafızada 4 byte yer kaplar
		char ch[2];	 // hafızada 2 byte yer kaplar  bu nedenle bu yapı için hafızada 4 byte yer ayrılır.
	};

	union var u;

	u.ch[0]=3; // hafızada ayrılan 4 byte yerin ilk iki byte 32 diğer byte lar 0
	u.ch[1]=2;
	printf("%d,%d,%d\n",u.ch[0],u.ch[1],u.a );	//3,2,3200
	return 0;
}