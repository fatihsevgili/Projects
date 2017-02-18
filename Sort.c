*****************************************************************
*     								*
*/*Sıralı iki diziyi sıralı tek dizi haline getiren kod..*/	*						        *
*							        *
*								*
*****************************************************************

#include <stdlib.h>
#include <stdio.h>

#define SIZE1 6
#define SIZE2 10

//Bu kullanımda dizi de boyut belirtirken değişken kullanamazsın.
//Const key word ile yapılan tanımlamalar değişkendir.

//const int SIZE1=6;     
//const int SIZE2=9;


int main()
{
	int tek[SIZE1]={1,3,11,13,21,41};
	int cift[SIZE2]={4,6,8,10,12,16,34,42,48,56};
	int merge[SIZE1+SIZE2];
	int index1=0,index2=0,k=0;

	for(k=0;k<SIZE1+SIZE2;k++)
	{
		
		if(index1==SIZE1)
			merge[k]=cift[index2++];
		else if (index2==SIZE2)
			merge[k]=tek[index1++];
		else

			if(tek[index1]<cift[index2])
				merge[k]=tek[index1++];
			else
				merge[k]=cift[index2++];
	}

	for(k=0;k<SIZE1;k++)
		printf("%d  ",tek[k]);

	printf("\n***********************************************\n");

	for(k=0;k<SIZE2;k++)
		printf("%d  ",cift[k]);
	
	printf("\n***********************************************\n");			
	
	for(k=0;k<SIZE1+SIZE2;k++)
		printf("%d  ",merge[k]);
		printf("\n");
	return 0;
}
