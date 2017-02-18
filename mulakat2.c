#include <stdio.h>

struct p
{
	int x;
	char y;
};

struct p *q;  // p tipinde değer saklayan hafıza adresini gösteren pointer tanımladık.

void foo(struct p*);  // fonksiyon prototipi
 
int main(int argc, char const *argv[])
{
 	struct p p1[]={1,92,3,94,5,96}; // p tipinde dizi tanımladık ve dizi elemanlarını atadık. BUrada her dizi elemanı 2 değer saklayabiliyor, biz diziye 6 değer elaman atadığımız
 									// için dizi 3 elemanlı oldu. 

 	foo(p1);  // foo fonksiyonuna p1 dizisinin başlangıç adresini gönderdik, dizilerde dizi adı pointer gibidir, burada p1 dizinin başlangıcını gösteriyor. 

 	printf("%d\n", (p1+1)->x+10); //dizinin ikinci elamanının x değerine(3) 10 ekledik
 	
 	printf("%d\n", (p1+2)->y-6);  //dizinin üçüncü elamanının y değerinden(96) 6 çıkardık.
 	
 	return 0;
}

void foo(struct p *abc)	
{
	struct p *ptr1=abc;   //  ptr1 pointerı p1 dizisinin başlangıç adresini gösteriyor.

	printf("%d\n", ptr1->x); // dizinin ilk elamanının x değerini(1) yazdırıyor.  
	printf("%d\n", ptr1->y); // dizinin ilk elamanının y değerini(92) yazdırıyor.  
}