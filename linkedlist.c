#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"


node* elamanEkle(node* root, int data)
{
	if(root==NULL)
	{
		root=(node*)malloc(sizeof(node));
		root->data=data;
		root->next=NULL;
		return root;
	}
	
	node* iter=root;
	while(iter->next!=NULL)
		iter=iter->next;
    
    iter->next=(node*)malloc(sizeof(node));
	iter->next->data=data;
	iter->next->next=NULL;
	return root;

}

node* siraliElemanEkle(node *r,int data)
{
	if(r==NULL)
	{
		r=(node*)malloc(sizeof(node));
		r->data=data;
		r->next=NULL;
		return r;
	}
	if(data<r->data)
	{
		node *temp=(node*)malloc(sizeof(node));
		temp->data=data;
		temp->next=r;
		return temp;
	}
	
	node *iter=r;
	while(iter->next!=NULL && data>iter->next->data)
		iter=iter->next;
	node *temp=(node*)malloc(sizeof(node));
	temp->data=data;
	temp->next=iter->next;
	iter->next=temp;
	return r;
}

node* elemanSil(node *root,int data)
{
	if(root==NULL)
	{
		printf("Dizi boş\n");
		return root;
	}
	
	if(data==root->data)
	{
		node *temp=(node*)malloc(sizeof(node));
		temp=root;
		return root=root->next;
		free(temp);
	}
	node *iter=root;

	while(iter->next!=NULL && data!=iter->next->data)
		iter=iter->next;

	if(iter->next==NULL)
	{
		printf("Silinecek eleman bulunamadı\n");
		return root;
	}
	node *temp=(node*)malloc(sizeof(node));
	temp=iter->next;
	iter->next=temp->next;
	free(temp);
	return root;
	
}

void bastir(node *root)
{

	while (root!=NULL)
	{
		printf("%d  \n",root->data);
		root=root->next;
	}
	
	
}
