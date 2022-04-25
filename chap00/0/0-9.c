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
	queue[queue_size] = n;
	tail++;
	queue_size++;
}

int	dequeue()
{
	if (queue_size == 0)
	{
		printf("Queue Empty!\n");
		return ;
	}
	head++;
	queue_size--;
	return queue[head - 1];
}
