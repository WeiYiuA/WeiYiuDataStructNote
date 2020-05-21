#include "LinkQueueNode.h"

LinkQueueNode::LinkQueueNode()
{
	this->data = 0;
	this->next = 0;
}

LinkQueueNode::~LinkQueueNode()
{
}

int LinkQueueNode::getData()
{
	return this->data;
}

void LinkQueueNode::setData(int _data)
{
	this->data = _data;
}

LinkQueueNode* LinkQueueNode::getNext()
{
	return this->next;
}

void LinkQueueNode::setNext(LinkQueueNode* _next)
{
	this->next = _next;
}
