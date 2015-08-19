#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../inc/queue.h"

queue* init_queue( ) {
	printf("Init Queue\n");
	queue *q;
	q = (queue*) malloc(sizeof(queue));
	if(q == NULL)
		return 0;
	memset(q, 0, sizeof(queue));	
	q->maxSize = TEMP_MAX_SIZE;
	q->curSize = 0;
	q->head = 0;
	q->tail = 0;

	q->items = (int*) malloc(sizeof(int) * q->maxSize);
	if(q->items == 0)
		return 0;
	memset(q->items, 0, sizeof(int) * q->maxSize);

	return q;
}

int release_queue(queue *que) {
	printf("Release Queue\n");
	if(que == NULL)
		return 0;
	free(que->items);
	free(que);
	return 0;
}

int enqueue(int d, queue *que) {
	if((que->tail+1) <= que->maxSize) {
		que->items[que->tail] = d;
		que->tail++;
		que->curSize++;
		return 0;
	}
	
	return QUEUE_FULL;
}

int dequeue(int *d, queue *que) {
	int i = 0;
	if(que->head == que->tail) return QUEUE_EMPTY;
	
	*d = que->items[que->head];
	
	for(i = 0; i < que->tail; i++) {
		que->items[i]= que->items[i+1];
	}
	que->tail--;
	que->curSize--;
	
				
 
	return 0;
}
