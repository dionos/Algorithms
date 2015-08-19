#ifndef _STACK_H_
#define _STACK_H_

#include <stdint.h>

#define TEMP_MAX_SIZE  4

#define STACK_FULL	1
#define STACK_EMPTY	2


struct __stack {
	int	*items;
	uint32_t maxSize;
	int curSize;
};

typedef struct __stack stack;


stack* init_stack( );

int release_stack(stack *stk );

int push(int d, stack *stk);
int pop(int *d, stack *stk);


#endif // _STACK_H_
