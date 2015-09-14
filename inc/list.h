#ifndef _LIST_H_
#define _LIST_H_

typedef struct _items {
	int item;
	int count;
}items;

typedef struct _node{
	items item;
	struct _list* next;
}node;


/*return new head of linked list*/
node* init_list();

/*delete all linked list*/
int release_list(node *n);

/*add new element to end of linked list*/
int push_to_end(node *n, items item);

/*
push_back();
push_front();

begin();
end();
erase();

getLenght();
*/
#endif //_LIST_H_
