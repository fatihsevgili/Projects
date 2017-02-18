#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"




int main(int argc, char const *argv[])
{
	node *root=NULL;
	root=siraliElemanEkle(root,400);
	root=siraliElemanEkle(root,40);
	root=siraliElemanEkle(root,4);
	root=siraliElemanEkle(root,450);
	root=siraliElemanEkle(root,50);
	//root=elemanSil(root,400);
	root=elemanSil(root,4);
	//root=elemanSil(root,50);
	//root=elemanSil(root,450);
	//root=elemanSil(root,40);
	//int i;
	//for(i=1;i<11;++i)
	//{
		//root=elamanEkle(root,i*10);
	//}
	//root=elamanEkle(root,22);
	//arayaElamanEkle(root,25);
	bastir(root);
	return 0;
}