#include <../include/simplelinkedlist/slinkedlist.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>


// simple linked list functions
// return the root of a new simple linked list
void init_slist(slnode** root) {
	*root = NULL;
}

// returns the first node equals to value if it exists otherwise returns null;
slnode* sl_find(slnode * root, int value) {

	while (root != NULL) {
		if (root->num == value)
			return root;
		else
			root = root->next;
	}
	return root;
}
// chamador passa o endereço de um ponteiro para o nó raiz
// atualiza valor do ponteiro do chamador
void sl_remove(slnode** root, int value) {

	slnode* tmp = NULL;
	slnode* rootsafe = *root;

	while (*root != NULL) {
		if ((*root)->num == value){
            tmp = *root;  // salva o endereço do nó atual
            *root = tmp->next; //
            free(tmp);
			printf("Removed %d: ",value);
            return;
		}
		root = &(*root)->next;
	}

}

void sl_insert(slnode** root, int value){

    while (*root != NULL){ // find a node which the num is bigger than value or reaches the end of list or the list
        if ((*root)->num > value)
            break;

		root = &(*root)->next;
    }
    slnode *tmp = (slnode *) malloc(sizeof(slnode));
    tmp->num = value;
	tmp->next = *root;
	*root = tmp;
	printf("Inserted %d: ", value);
}

void free_slist(slnode* root) {
	slnode* next = NULL;

	while(root != NULL){
		next = root->next;
		free(root);
		root = next;
	}
}

void print_slist(slnode* root)
{
	if (root == NULL) {printf("Empty List\n"); return;}
	printf("List (");
	while (root != NULL) {
		printf("%d", root->num);
		if (root->next != NULL)
			printf(", ");
		root = root->next;
	}
	printf(")\n");
}


