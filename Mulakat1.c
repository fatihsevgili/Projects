#include <stdio.h>

struct ogrenci
{
	char const *isim;	//char tipinde value saklayan hafıza(ram) adresini  gösteren pointer
};

struct ogrenci s[2], *r;  // öğrenci tipinde iki elemanlı dizi ve öğrenci tipinde value saklayan hafıza(ram) adresini gösteren pointer tanımladık.

int main(int argc, char const *argv[])
{
	s[0].isim="umut"; // struct oğrenci tipinde olan s dizisinin ilk elemanının isim pointerına "umut" stringinin başlangıç adresini verdik.
	
	s[1]=s[0];	
	
	printf("%s  %s\n", s[0].isim,s[1].isim ); // %s, başlangıç adresi verilen stringi son karakterine kadar yazdırıyor. Aslında hafızada bu string 'u','m','u','t','\0' olarak tutuluyor.
 	
 	s[1].isim="bulut"; // struct oğrenci tipinde olan s dizisinin ilk elemanının isim pointerına "bulut" stringinin başlangıç adresini verdik. 
	
	printf("%s  %s\n", s[0].isim,s[1].isim );
	
	r=&s[1];  // öğrenci tipinde value saklayan hafıza adresini gösteren r pointerına s dizisinin 1. elamanının adresini verdik. & kullanmadan sadece s yazabilirdik, s dizinin başlangıç adresini gösteriyor.

	printf("%s  %s\n", s[0].isim+1,r->isim+2); // "umut" stringinin başlangıç adresini gösteren isim pointerının değerini bir artırdık, böylece %s 'm' karakterinden başlayarak "mut" yazar 
												// "bulut" stringinin başlangıç adresini gösteren isim pointerının değerini iki artırdık, böylece %s 'l' karakterinden başlayarak "lut" yazar 
	printf("%c  %c\n", s[0].isim[0],r->isim[0]); //%c sadece bir karakter yazar ve yazacağı karakter kendisine net verilmelidir.

	printf("%ld\n",sizeof(s));    // 64 bit işlemcilerde bir hafıza adresi 8 byte dır. Bir pointer bu 8 byte hafıza adresinin değerini tutar. Burada s dizisi iki pointer tutuyor ve boyutu
									// 16 byte.
	printf("%ld\n",sizeof(int));	

	printf("%ld\n",sizeof(char));

	printf("%ld\n",sizeof(float));

	printf("%ld\n",sizeof(double));

	printf("%ld\n",sizeof(int *));  // bir pointer işlemci mimarisine göre gösterdiği değerin saklandığı 32 veya 64 bit hafıza adresinin değerini tutar. 
 	return 0;
}