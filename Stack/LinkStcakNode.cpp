#include "LinkStcakNode.h"

LinkStackNode::LinkStackNode()
{
	this->data = 0;
	this->next = nullptr;
}

LinkStackNode::~LinkStackNode() 
{
}

int LinkStackNode::getData()
{
	return this->data;
}

void LinkStackNode::setData(int _data)
{
	this->data = _data;
}

LinkStackNode* LinkStackNode::getNext()
{
	return this->next;
}

void LinkStackNode::setNext(LinkStackNode* _next) 
{
	this->next = _next;
}