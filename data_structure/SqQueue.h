#ifndef SQQUEUE_H
#define SQQUEUE_H 1

#include "basic.h"

template <typename T> struct SqQueue {
	T data[MAX_SIZE];
	int front;
	int rear;
};


template <typename T> void InitQueue(SqQueue<T> *&q)
{
	q = new SqQueue<T>;
	q->front = q->rear = -1;
}


template <typename T> void DestroyQueue(SqQueue<T> *&q)
{
	delete q;
}


template <typename T> bool QueueEmpty(SqQueue<T> *q)
{
	return(q->front == q->rear);
}


template <typename T> bool enQueue(SqQueue<T> *&q, T e)
{
	if (q->front == MAX_SIZE - 1) {  //���������
		return false;
	}
	q->rear++;
	e = q->data[q->rear];
	return true;
}




#endif
