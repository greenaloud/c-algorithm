#include <stdio.h>

#define QUEUE_CAPACITY  8

int queue[QUEUE_CAPACITY];
int head = 0;
int tail = -1;
int queue_size = 0;

void    enqueue(int n)
{
	if (queue_size == QUEUE_CAPACITY)
	{
		printf("Queue Full!\n");
		return ;
	}
	tail = (tail + 1) % QUEUE_CAPACITY;
	queue_size++;
	queue[tail] = n;
}

int	dequeue()
{
	int	ret;

	if (queue_size == 0)
	{
		printf("Queue Empty!\n");
		return ;
	}
	ret = queue[head]
	head = (head + 1) % QUEUE_CAPACITY;
	queue_size--;
	return ret;
}
