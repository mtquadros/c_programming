#include "linkedlist.h"
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>


// simple linked list functions
// return the root of a new simple linked list
slnode* init_slist(int num) {
	slnode* root = (slnode*) malloc(sizeof(slnode));

	root->num = num;
	root->next = NULL;

	return root;
}

// returns the first node equals to value if it exists otherwise returns null;
slnode* sl_find(slnode * root, int value) {

	while (root) {
		if (root->num == value)
			return root;
		else
			root = root->next;
	}
#ifdef _DEBUG_ME_
	assert(root == NULL || root->num == value);
#endif
	return root;
}

void sl_remove(slnode** root, int value) {
<<<<<<< HEAD:linkedlist.cpp
	slnode* prev = NULL;
	slnode* node = *root;

	while (*root) {
		if ((*root)->num == value)
			break;

		root = &(*root)->next;
	}




	if (prev == NULL) {
		*root = node->next;
	}
/*
#ifdef _DEBUG_ME_
	assert(slfind(root, tmp->num));
=======

	slnode* tmp = NULL;

	while (*root) {
		if ((*root)->num == value){
            tmp = *root;
            *root = tmp->next;
            free(tmp);
            return;
		}
		root = &(*root)->next;
	}

#ifdef _DEBUG_ME_
	assert(slfind(root, tmp->num) == NULL);
>>>>>>> Fix#01:linkedlist.c
#endif
*/
}

void sl_insert(slnode** root, int value) {

<<<<<<< HEAD:linkedlist.cpp
	while (*root) {
		if ((*root)->num > value)
			break;
=======
    while (*root){
        if ((*root)->num > value)
            break;
        
		root = &(*root)->next;
    }
    slnode *tmp = (slnode *) malloc(sizeof(slnode));
    tmp->num = value;
	tmp->next = *root;
	*root = tmp;
>>>>>>> Fix#01:linkedlist.c

		root = &(*root)->next;
	}

#ifdef _DEBUG_ME_
	assert(*root != NULL ? (*root)->num > value : *root == NULL);
#endif // _DEBUG_ME_

	slnode *tmp = (slnode *) malloc(sizeof(slnode));
	tmp->num = value;
	tmp->next = *root;
	*root = tmp;
}

<<<<<<< HEAD:linkedlist.cpp

void free_slist(slnode** root) {
=======
void free_slist(slnode* root) {
>>>>>>> Fix#01:linkedlist.c
	slnode* next = NULL;

	while(root){
		next = root->next;
		free(root);
		root = next;
	}
#ifdef _DEBUG_ME_
	assert(*root == NULL);
#endif // _DEBUG_ME_

}

void print_slist(slnode* root)
{
	while (root) {
		printf("%d, ", root->num);
		root = root->next;
	}
	printf("\n");
}


