//
//
// Exercises of data structures for interview preparation
//

#include <stdio.h>
#include "linkedlist.h"

int main()
{
	slnode* root = init_slist(20);
	
	//Inser��o antes no inicio da lista
	sl_insert(&root, 15);

	print_slist(root);


	// Inser��o no fim da lista
	sl_insert(&root, 45);

	print_slist(root);

	//Inser��o no meio da lista
	sl_insert(&root, 25);

	print_slist(root);


	slnode * found = sl_find( root, 15);

	if (found) {
		sl_remove(&root, found->num);
	}

	print_slist(root);
}


