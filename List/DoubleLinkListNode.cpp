#include "DoubleLinkListNode.h"

DoubleLinkListNode::DoubleLinkListNode(){
	this->data = 0;
	this->prior = nullptr;
	this->next = nullptr;
}

DoubleLinkListNode::~DoubleLinkListNode() {
}

DoubleLinkListNode* DoubleLinkListNode::getPrior() {
	return this->prior;
}

void DoubleLinkListNode::setPrior(DoubleLinkListNode* _prior) {
	this->prior = _prior;
}

int DoubleLinkListNode::getData() {
	return this->data;
}

void DoubleLinkListNode::setData(int _data) {
	this->data = _data;
}

DoubleLinkListNode* DoubleLinkListNode::getNext() {
	return this->next;
}

void DoubleLinkListNode::setNext(DoubleLinkListNode* _next) {
	this->next= _next;
}
