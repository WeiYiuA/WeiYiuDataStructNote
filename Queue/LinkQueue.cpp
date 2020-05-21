#include "LinkQueue.h"
#include <iostream>
using std::cout; using std::endl;

LinkQueue::LinkQueue()
{
	this->front = this->rear = nullptr;
}

LinkQueue::~LinkQueue()
{
}

LinkQueueNode* LinkQueue::getFront()
{
	return this->front;
}

void LinkQueue::setFront(LinkQueueNode* _front)
{
	this->front = _front;
}

LinkQueueNode* LinkQueue::getRear()
{
	return this->rear;
}

void LinkQueue::setRear(LinkQueueNode* _rear)
{
	this->rear = _rear;
}

void LinkQueue::InitLinkQueue()
{
	this->front = this->rear = new LinkQueueNode();
	this->front->setNext(nullptr);
}

void LinkQueue::EmLinkQueue(int _e)
{
	LinkQueueNode* newNode = new LinkQueueNode();
	newNode->setData(_e);
	newNode->setNext(nullptr);
	this->rear->setNext(newNode);
	this->rear = newNode;
}

int LinkQueue::DeLinkQueue()
{
	if (this->front == this->rear) cout << "队列为空，无法出队！" << endl;
	else {
		LinkQueueNode* DelNode = this->front->getNext();
		int DelNum = DelNode->getData();
		this->front->setNext(DelNode->getNext());
		if (DelNode == this->rear) this->rear = this->front;
		delete DelNode;
		return DelNum;
	}
	return -1;
}

int LinkQueue::LengthLinkQueue()
{
	int LengthLinkQueue = 0;
	LinkQueueNode* Node = this->front->getNext();
	while (Node != nullptr) {
		LengthLinkQueue++;
		Node = Node->getNext();
	}
	return LengthLinkQueue;
}

bool LinkQueue::EmptyLinkQueue()
{
	return this->front == this->rear;
}

int LinkQueue::Front()
{
	if (this->front == this->rear) cout << "队列为空，没有队头！" << endl;
	else return this->front->getNext()->getData();
	return -1;
}

int LinkQueue::Rear()
{
	if (this->front == this->rear) cout << "队列为空，没有队尾！" << endl;
	else return this->rear->getData();
	return -1;
}

void LinkQueue::DestroyLinkQueue()
{
	LinkQueueNode* Node = this->front->getNext();
	while (Node != nullptr  ) {
		LinkQueueNode* DelNode = Node;
		Node = DelNode->getNext();
		delete DelNode;
	}
	this->rear = this->front;
}
