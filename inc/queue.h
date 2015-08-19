#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <stdint.h>

#define TEMP_MAX_SIZE  4

#define QUEUE_FULL	1
#define QUEUE_EMPTY	2


struct __queue {
	int	*items;
	uint32_t maxSize;
	int curSize;
	int head;
	int tail;
};

typedef struct __queue queue;


queue* init_queue( );

int release_queue(queue *que );

int enqueue(int d, queue *que);
int dequeue(int *d, queue *que);


#endif // _QUEUE_H_
