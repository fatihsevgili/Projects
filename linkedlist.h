#ifndef LINKEDLIST_H
#define LINKEDLIST_H
		
	struct array
{
	int data;
	struct array *next;
};

typedef struct array node;

node* elamanEkle(node*,int);
node* siraliElemanEkle(node*,int);
node* elemanSil(node*,int);
void bastir(node*);

#endif	