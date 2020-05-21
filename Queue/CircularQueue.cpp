#include "CircularQueue.h"
#include <iostream>
using std::cout; using std::endl;

CircularQueue::CircularQueue()
{
	this->data = 0;
	this->front = this->rear = this->MaxCQueueLength = 0;
}

CircularQueue::~CircularQueue()
{
}

int* CircularQueue::getData()
{
	return this->data;
}

void CircularQueue::setData(int* _data)
{
	this->data = _data;
}

int CircularQueue::getFront()
{
	return this->front;
}

void CircularQueue::setFront(int _front)
{
	this->front = _front;
}

int CircularQueue::getRear()
{
	return this->rear;
}

void CircularQueue::setRear(int _rear)
{
	this->rear = _rear;
}

int CircularQueue::getMaxCQueueLength()
{
	return this->MaxCQueueLength;
}

void CircularQueue::setMaxCQueueLength(int _MaxCQueueLength)
{
	this->MaxCQueueLength = _MaxCQueueLength;
}

void CircularQueue::InitCircularQueue(int _n)
{
	this->data = new int[_n];
	this->MaxCQueueLength = _n;
	this->front = this->rear = 0;
}

void CircularQueue::EnCircularQueue(int _e)
{
	if (this->front ==  (this->rear + 1) % this->MaxCQueueLength) cout << "队列已满，无法入队！" << endl;
	else {
		this->rear = (this->rear + 1) % this->MaxCQueueLength;
		this->data[rear] = _e;
	}
}

int CircularQueue::DeCircularQueue()
{
	if (this->front == this->rear) cout << "队列为空，无法出队！" << endl;
	else {
		this->front = (this->front + 1) % this->MaxCQueueLength;
		return this->data[this->front];
	}
}

int CircularQueue::LengthCircularQueue()
{
	return (this->rear - this->front + this->MaxCQueueLength) % this->MaxCQueueLength;
}

bool CircularQueue::EmptyCircularQueue()
{
	return this->front == this->rear;
}

bool CircularQueue::FullCircularQueue()
{
	return this->front == (this->rear + 1) % this->MaxCQueueLength;
}

int CircularQueue::Front()
{
	return this->data[(this->front + 1) % this->MaxCQueueLength];
}

int CircularQueue::Rear()
{
	return this->data[this->rear];
}
