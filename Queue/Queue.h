#pragma once

#ifndef QUEUE_H
#define QUEUE_H

/*
Time:2020-05-21
Author:WeiYiu
C++ À≥–Ú∂”¡– int
*/


class Queue {

public:
	Queue();
	~Queue();
	int* getData();
	void setData(int* _data);
	int getFront();
	void setFront(int _front);
	int getRear();
	void setRear(int _rear);
	int getMaxLengthQueue();
	void setMaxLengthQueue(int _MaxLengthQueue);

	void InitQueue(int _n);
	void EnQueue(int _n);
	int DeQueue();
	int LengthQueue();
	bool EmptyQueue();
	bool FullQueue();
	int Front();
	int Rear();

private:
	int* data;
	int front;
	int rear;
	int MaxLengthQueue;
};

#endif // !QUEUE_H
