#include <stdio.h>

	int main(int argc, char const *argv[])
	{
		union var
		{
			int a,b;    //union içerisindeki değişkenler aynı hafıza bölgesini paylaşıyor. En büyük değişken kadar hafızadan yer ayrılıyor.
		};

		union var v;
		v.a=10;
		v.b=20;  // bu atama ile 20 değeri 10 nun üzerine yazıldı.
		printf("%d\n",v.a);  
		v.b=100; // bu atama ile 100 değeri 20 nin üzerine yazıldı.
		v.a=200; // bu atama ile 200 değeri 100 ün üzerine yazıldı.
		printf("%d\n",v.b);
		return 0;
	}