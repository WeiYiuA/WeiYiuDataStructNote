#include "LinkStack.h"
#include "LinkStcakNode.h"
#include <iostream>
using std::cout; using std::endl;

LinkStack::LinkStack()
{
	this->top = new LinkStackNode();
}

LinkStack::~LinkStack()
{
}

LinkStackNode* LinkStack::getTop() 
{
	return this->top;
}

void LinkStack::setTop(LinkStackNode* _top)
{
	this->top = _top;
}

void LinkStack::InitLinkStack()
{
	this->top = new LinkStackNode();
}

void LinkStack::PushLinkStack(int _n) 
{
	LinkStackNode* linkSNode = new LinkStackNode();
	linkSNode->setData(_n);
	linkSNode->setNext(this->top);
	this->top = linkSNode;
}

int LinkStack::PopLinkStack()
{
	LinkStackNode* popNode = this->top;
	if (popNode->getNext() == nullptr) cout << "栈为空，无法出栈！" << endl;
	else {
		int popNum = popNode->getData();
		this->top = popNode->getNext();
		delete popNode;
		return popNum;
	}
	return -1;
}

bool LinkStack::LinkStackEmpty()
{
	return this->top->getNext() == nullptr;
}

void LinkStack::DestroyLinkStack()
{
	LinkStackNode* destroyNode = this->top;
	LinkStackNode* DNode = 0;
	while (destroyNode->getNext() != nullptr) {
		DNode = destroyNode;
		destroyNode = DNode->getNext();
		delete DNode;
	}
}