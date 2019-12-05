#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct tree* left;
	struct tree* right;
};
struct node* root=NULL;

struct node *newnode(int data){
	struct node* tmp = (struct node*)malloc(sizeof(struct node));
	tmp->data = data;
	tmp->left = NULL;
	tmp->right = NULL;
	return tmp;
}

struct node* insert(struct node *root,int data){
	if(root == NULL){
		root = newnode(data);}
	else { if (data > root->data){
		root->right = insert(root->right,data);
		}
		else {
			root->left = newnode(root->left,data);
		}
	}
	return root;
}


int main(){
	root = insert(root,45);
	printf("The root node address is %p\n",root);
	root = insert(root,12);
	printf("The root node address is %p\n",root);
	root = insert(root,69);
	printf("The root node address is %p\n",root);
	root = insert(root,32);
	printf("The root node address is %p\n",root);
	return 0;
}


