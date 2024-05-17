//
//
// Exercises of data structures for interview preparation
//

#include <stdio.h>
#include <simplelinkedlist/slinkedlist.h>

int main()
{
	//slnode* root = init_slist(20);
	slnode* root;

	init_slist(&root);

	print_slist(root);
	printf("\n+++++++++++++++++++++++++++++\n");

	sl_insert(&root,20);

	print_slist(root);

	//Inserção antes no inicio da lista
	sl_insert(&root, 15);

	print_slist(root);


	// Inserção no fim da lista
	sl_insert(&root, 45);

	print_slist(root);

	//Inserção no meio da lista
	sl_insert(&root, 25);

	print_slist(root);

	{
	slnode * found = sl_find( root, 15);

	if (found) {
		sl_remove(&root, found->num);
	}
	print_slist(root);
	}
	{
	slnode * found = sl_find( root, 45);

	if (found) {
		sl_remove(&root, found->num);
	}
	print_slist(root);
	}
	{
		slnode * found = sl_find( root, 20);

		if (found) {
			sl_remove(&root, found->num);
		}
		print_slist(root);
	}

	{
		slnode * found = sl_find( root, 25);

		if (found) {
			sl_remove(&root, found->num);
		}
	printf("+++++++++++++++++++++++++++++\n");
		print_slist(root);
	}

return 0;
}


