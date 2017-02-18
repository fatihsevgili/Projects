#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void bul_harf(const char **,char, char );

int	main(int argc, char const *argv[])
{
	//int p1[10];
    //int *p2[10];
    //int (*p3)[10];

    //printf("sizeof(int)   = %d\n", (int)sizeof(int));
    //printf("sizeof(int *) = %d\n", (int)sizeof(int *));
    //printf("sizeof(p1)    = %d\n", (int)sizeof(p1));
    //printf("sizeof(p2)    = %d\n", (int)sizeof(p2));
    //printf("sizeof(p3)    = %d\n", (int)sizeof(p3));
	const char *pnames[]= {"Ali","Zeynep","Osman","Ayse","Emre","Zeliha","Yusuf","Mahmut"};  //BUrada const kullanmamızın sebebi derleyicin hata vermesi.

	//char pnames[]= {"Ali","Zeynep","Osman","Ayse","Emre","Zeliha","Yusuf","Mahmut"};  
	//char pnames[]={'a','b','c','\0'};   // önemli char array sadece karakter alır ve bunu printf %s ile yazdırmak istersen sonlandırma karakteri koymalısın.
	//printf("%s\n",pnames );
	//printf("%d\n",(int)sizeof(pnames));	//Dizinin byte olarak boyutu
	//printf("Dizinin eleman sayısı: %d\n",(int)(sizeof(pnames)/sizeof(char)));	//Dizinin eleman sayısı
	//printf("sizeof(pnames)    = %d\n", (int)sizeof(pnames));

	//char boyut=3;
	//char **names=(char**)malloc(3*sizeof(char*));
	//names[0]=(char*)"Ali";
	//names[1]=(char*)"Zeynep";
	//names[2]=(char*)"Gül";
	//int c=strcmp(names[0],"Ali");
	//printf("%d\n",c);
	/*char *pch=(char*)strchr(pnames[2],'e');
	char *pchx=(char*)strchr(pnames[2],'E');
	printf("%s\n", pch);
	if(pch!=NULL||pchx!=NULL);
	{
		//	printf("%s\n", pch);
		printf("%s\n", pnames[2]);
		
	}*/	
	bul_harf(pnames, 'w',sizeof(pnames)/sizeof(*pnames));
	

	return 0;
}

void bul_harf(const char **cptr, char ch1, char arrayLength)
{
	char i,a,ch2;
	char boyut=0;
	char **names=(char**)malloc(sizeof(char*));

	if(!isupper(ch1))
		ch2=toupper(ch1);
	else
		ch2=tolower(ch1);
		
	 for(i=0;i<arrayLength;++i)
	{
	 		
	 		char *pch=(char*)strchr(cptr[i],ch1);
	 		char *pchx=(char*)strchr(cptr[i],ch2);
			
			if(pch!=NULL || pchx!=NULL)
			{
					names[boyut]=(char*)(*(cptr+i));
					++boyut;
					char **newnames=(char**)malloc((boyut+1)*sizeof(char*));
					for(a=0;a<boyut;a++)
					newnames[a]=names[a];
				
					free(names);
					names=newnames;	
				
			}
	}

	names[boyut]=NULL;
	a=0;
	if(names[a]==NULL)
		printf("Aradığınız harfi içeren isim bulunamadı..\n");
	while(names[a]!=NULL)
	{
		printf("%s\n",names[a]);	
		++a;
	}

}