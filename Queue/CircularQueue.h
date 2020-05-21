#pragma once

#ifndef CIRCULARQUEUE_H
#define CIRCULARQUEUE_H

/*
Time:2020-05-21
Author:WeiYiu
C++ 循环队列 int
浪费一个元素空间，维护指针，使之循环利用其他空间.
*/

class CircularQueue {
public:
	CircularQueue();
	~CircularQueue();
	int* getData();
	void setData(int* _data);
	int getFront();
	void setFront(int _front);
	int getRear();
	void setRear(int _rear);
	int getMaxCQueueLength();
	void setMaxCQueueLength(int _MaxCQueueLength);

	void InitCircularQueue(int _n);
	void EnCircularQueue(int _e);
	int DeCircularQueue();
	int LengthCircularQueue();
	bool EmptyCircularQueue();
	bool FullCircularQueue();
	int Front();
	int Rear();
private:
	int* data;
	int front;
	int rear;
	int MaxCQueueLength;
};

#endif // !CIRCULARQUEUE_H
