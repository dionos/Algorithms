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
	return s;
}

int release_stack(stack	*stk ) {
	printf("Release Stack\n");
	if(stk == NULL)
		return 0;
	free( stk );
	return 0;
}

int push(data *d, stack *stk) {
	return 0;
}

int pop(data *d, stack *stk) {
	return 0;
}

