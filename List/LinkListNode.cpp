#include "LinkListNode.h"

LinkListNode::LinkListNode() {
	this->data = 0;
	this->next = nullptr;
}

LinkListNode::~LinkListNode() {
}

int LinkListNode::getData() {
	return this->data;
}

void LinkListNode::setData(int _data) {
	this->data = _data;
}

LinkListNode* LinkListNode::getNext() {
	return this->next;
}

void LinkListNode::setNext(LinkListNode* _next) {
	this->next = _next;
}