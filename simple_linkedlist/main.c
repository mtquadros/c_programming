//
//
// Exercises of data structures
//

#include <stdio.h>
#include "linkedlist.h"
#include <assert.h>


int main()
{
	slnode* root = init_slist(20);
<<<<<<< HEAD:struts.cpp

	sl_insert(&root, 15);

	sl_insert(&root, 45);

	sl_insert(&root, 2);

	sl_insert(&root, 21);

	sl_insert(&root, 46);
=======
	
	sl_insert(&root, 15);
>>>>>>> Fix#01:main.c

	print_slist(root);

    free_slist(&root);

<<<<<<< HEAD:struts.cpp
#ifdef _DEBUG_ME_
	assert(root == NULL);
#endif // _DEBUG_ME_

return 0;
=======
	sl_insert(&root, 45);

	print_slist(root);

	slnode * found = sl_find( root, 15);

	if (found) {
		sl_remove(&root, found->num);
	}

	print_slist(root);
>>>>>>> Fix#01:main.c
}


