#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "./inc/stack.h"
#include "./inc/queue.h"

void test_stack();
void test_queue();

int main() {
	queue *que;


//	test_stack();

	test_queue();
	
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

void test_queue() {
	queue *que;
	int d = 0;
	int result = 0;	
	
	que = init_queue();

	printf("maxSize = %i\n", que->maxSize);
	printf("curSize = %i\n", que->curSize);
	printf("head = %i\n", que->head);
	printf("tail = %i\n", que->tail);

	d = 1;
	result = enqueue(d, que);
	printf("d = %i\n", d);
	printf("enqueue result = %u\n", result);	
	printf("cur queue = %u\n", que->curSize);
	printf("head = %i\n", que->head);
	printf("tail = %i\n", que->tail);

	d = 10;
	result = enqueue(d, que);
	printf("d = %i\n", d);
	printf("enqueue result = %u\n", result);	
	printf("cur queue = %u\n", que->curSize);
	printf("head = %i\n", que->head);
	printf("tail = %i\n", que->tail);

	d = 4;
	result = enqueue(d, que);
	printf("d = %i\n", d);
	printf("enqueue result = %u\n", result);	
	printf("cur queue = %u\n", que->curSize);
	printf("head = %i\n", que->head);
	printf("tail = %i\n", que->tail);

	d = -1;
	result = enqueue(d, que);
	printf("d = %i\n", d);
	printf("enqueue result = %u\n", result);	
	printf("cur queue = %u\n", que->curSize);
	printf("head = %i\n", que->head);
	printf("tail = %i\n", que->tail);

	d = 1231;
	result = enqueue(d, que);
	printf("d = %i\n", d);
	printf("enqueue result = %u\n", result);	
	printf("cur queue = %u\n", que->curSize);
	printf("head = %i\n", que->head);
	printf("tail = %i\n", que->tail);

	d = -10;
	result = enqueue(d, que);
	printf("d = %i\n", d);
	printf("enqueue result = %u\n", result);	
	printf("cur queue = %u\n", que->curSize);
	printf("head = %i\n", que->head);
	printf("tail = %i\n", que->tail);

	printf("\n\n");

	d = 0;
	result = dequeue(&d, que);
	printf("d = %i\n", d);
	printf("dequeue result = %u\n", result);
	printf("cur queue = %u\n", que->curSize);
	printf("head = %i\n", que->head);
	printf("tail = %i\n", que->tail);

	d = 0;
	result = dequeue(&d, que);
	printf("d = %i\n", d);
	printf("dequeue result = %u\n", result);
	printf("cur queue = %u\n", que->curSize);
	printf("head = %i\n", que->head);
	printf("tail = %i\n", que->tail);


	d = 0;
	result = dequeue(&d, que);
	printf("d = %i\n", d);
	printf("dequeue result = %u\n", result);
	printf("cur queue = %u\n", que->curSize);
	printf("head = %i\n", que->head);
	printf("tail = %i\n", que->tail);


	d = 0;
	result = dequeue(&d, que);
	printf("d = %i\n", d);
	printf("dequeue result = %u\n", result);
	printf("cur queue = %u\n", que->curSize);
	printf("head = %i\n", que->head);
	printf("tail = %i\n", que->tail);


	d = 0;
	result = dequeue(&d, que);
	printf("d = %i\n", d);
	printf("dequeue result = %u\n", result);
	printf("cur queue = %u\n", que->curSize);
	printf("head = %i\n", que->head);
	printf("tail = %i\n", que->tail);


	d = 0;
	result = dequeue(&d, que);
	printf("d = %i\n", d);
	printf("dequeue result = %u\n", result);
	printf("cur queue = %u\n", que->curSize);
	printf("head = %i\n", que->head);
	printf("tail = %i\n", que->tail);

	release_queue(que);
	
}
