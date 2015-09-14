#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

#include "../inc/list.h"


node* init_list(items item) {
	node *pNode = NULL;
	pNode = (node*) malloc(sizeof(node));
	memset(pNode, 0, sizeof(node));
	pNode->item.item = item.item;
	pNode->item.count = item.count;
	pNode->next = NULL;

	return pNode;
}

int release_list(node *l) {
	/*for all elements of list assigne NULL*/
	return 0;
}

