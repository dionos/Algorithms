#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "./inc/stack.h"
#include "./inc/queue.h"

void test_stack();

int main() {

	test_stack();

	init_queue();

	release_queue();
	
	return 0;
}

void test_stack() {
	stack *stk;
	int d;
	int result = 0;

	stk = init_stack();
	
	printf("max stack = %u\n", stk->maxSize);
	printf("cur stack = %u\n", stk->curSize);

	
	d = 1;
	result = push(d, stk);
	printf("d = %i\n", d);
	printf("push result = %u\n", result);	
	printf("cur stack = %u\n", stk->curSize);

	d = 10;
	result = push(d, stk);
	printf("d = %i\n", d);
	printf("push result = %u\n", result);	
	printf("cur stack = %u\n", stk->curSize);

	d = -10;
	result = push(d, stk);
	printf("d = %i\n", d);
	printf("push result = %u\n", result);	
	printf("cur stack = %u\n", stk->curSize);

	d = 30;
	result = push(d, stk);
	printf("d = %i\n", d);
	printf("push result = %u\n", result);	
	printf("cur stack = %u\n", stk->curSize);

	d = 20;
	result = push(d, stk);	
	printf("d = %i\n", d);
	printf("push result = %u\n", result);	
	printf("cur stack = %u\n", stk->curSize);

	d = -20;
	result = push(d, stk);	
	printf("d = %i\n", d);
	printf("push result = %u\n", result);	
	printf("cur stack = %u\n", stk->curSize);

	d = 0;
	result = pop(&d, stk);
	printf("d = %i\n", d);
	printf("pop result = %u\n", result);
	printf("cur stack = %u\n", stk->curSize);

	d = 0;
	result = pop(&d, stk);
	printf("d = %i\n", d);
	printf("pop result = %u\n", result);
	printf("cur stack = %u\n", stk->curSize);

	d = 0;
	result = pop(&d, stk);
	printf("d = %i\n", d);
	printf("pop result = %u\n", result);
	printf("cur stack = %u\n", stk->curSize);

	d = 0;
	result = pop(&d, stk);
	printf("d = %i\n", d);
	printf("pop result = %u\n", result);
	printf("cur stack = %u\n", stk->curSize);

	d = 0;
	result = pop(&d, stk);
	printf("d = %i\n", d);
	printf("pop result = %u\n", result);
	printf("cur stack = %u\n", stk->curSize);

	d = 0;
	result = pop(&d, stk);
	printf("d = %i\n", d);
	printf("pop result = %u\n", result);
	printf("cur stack = %u\n", stk->curSize);

	d = 0;
	result = pop(&d, stk);
	printf("d = %i\n", d);
	printf("pop result = %u\n", result);
	printf("cur stack = %u\n", stk->curSize);


	release_stack(stk);


}
