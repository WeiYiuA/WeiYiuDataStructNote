#include "Queue.h"
#include <iostream>
using std::cout; using std::endl;

Queue::Queue()
{
    this->data = 0;
    this->front = this->rear = this->MaxLengthQueue = 0;
}

Queue::~Queue()
{
}

int* Queue::getData()
{
    return this->data;
}

void Queue::setData(int* _data)
{
    this->data = _data;
}

int Queue::getFront()
{
    return this->front;
}

void Queue::setFront(int _front)
{
    this->front = _front;
}

int Queue::getRear()
{
    return this->rear;
}

void Queue::setRear(int _rear)
{
    this->rear = _rear;
}

int Queue::getMaxLengthQueue()
{
    return this->MaxLengthQueue;
}

void Queue::setMaxLengthQueue(int _MaxLengthQueue)
{
    this->MaxLengthQueue = _MaxLengthQueue;
}

void Queue::InitQueue(int _n) 
{
    this->data = new int[_n];
    this->MaxLengthQueue = _n;
    this->front = this->rear = -1;
}

void Queue::EnQueue(int  _n)
{
    if (this->rear == this->MaxLengthQueue - 1) cout << "队列已满，无法进队！" << endl;
    else {
        this->rear++;
        this->data[this->rear] = _n;
    }
}

int Queue::DeQueue()
{
    if (this->front == this->rear) cout << "队列为空，无法出队！" << endl;
    else {
        this->front++;
        return this->data[this->front];

    }
    return -1;
}

int Queue::LengthQueue()
{
    return this->rear - this->front;
}

bool Queue::EmptyQueue()
{
    return this->front == this->rear;
}

bool Queue::FullQueue()
{
    return this->rear == this->MaxLengthQueue - 1;
}

int Queue::Front()
{
    return this->data[this->front+1];
}

int Queue::Rear()
{
    return this->data[rear];
}
