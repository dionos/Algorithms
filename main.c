#include <stdio.h>

#include "./inc/stack.h"
#include "./inc/queue.h"

int main() {
	printf("Hello main.c\n");

	stack *stk;

	stk = init_stack();

	release_stack(stk);

	init_queue();

	release_queue();
	
	return 0;
}
