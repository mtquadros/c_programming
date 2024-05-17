#ifndef _LINKEDLIST_
#define _LINKEDLIST_

// ---------------------------------------
// Simple linked list node
typedef struct slnode {
	int num;
	struct slnode *next;
} slnode;


// simple linked list functions
// return the root of a new simple linked list
void init_slist(slnode** root);

// returns the first node equals to value if it exists otherwise returns null;
slnode * sl_find(slnode* root, int value);

void sl_remove(slnode** root, int value);

void sl_insert(slnode** root,int value);

void free_slist(slnode* root);

void print_slist(slnode* root);

#endif
