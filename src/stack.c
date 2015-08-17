#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../inc/stack.h"

stack* init_stack( ) {
	printf("Init Stack\n");
	stack *s;
	s = (stack*) malloc(sizeof(stack));
	if( s == NULL )
		return 0;
	memset(s, 0, sizeof(stack));
	s->maxSize = TEMP_MAX_SIZE;
	s->curSize = 0;
	
	s->items = (int*) malloc(sizeof(int) * s->maxSize);	
	memset(s->items, 0, sizeof(int) * s->maxSize);

	return s;
}

int release_stack(stack	*stk ) {
	printf("Release Stack\n");
	if(stk == NULL)
		return 0;
	free( stk->items );
	free( stk );
	return 0;
}

int push(int d, stack *stk) {
	if((stk->curSize+1) <= stk->maxSize) {
		stk->items[stk->curSize] = d;
		stk->curSize++;
		return 0;
	}
	return STACK_FULL;
}

int pop(int *d, stack *stk) {
	if(stk->curSize > 0) {
		stk->curSize--;
		*d = stk->items[stk->curSize];
		return 0;
	}
	return STACK_EMPTY;
}

