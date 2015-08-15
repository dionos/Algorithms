#ifndef _STACK_H_
#define _STACK_H_

struct __data {
	void	*item;
	size_t 	itemSize;
};

typedef struct __data data;

struct __stack {
	data	*items;
	int maxSize;
};

typedef struct __stack stack;


stack* init_stack( );

int release_stack(stack *stk );

int push(data *d, stack *stk);
int pop(data *d, stack *stk);


#endif // _STACK_H_
