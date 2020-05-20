#pragma once

#ifndef LINKSTACHNODE_H
#define LINKSTACHNODE_H

class LinkStackNode {
public:
	LinkStackNode();
	~LinkStackNode();
	int* getTop();
	void setTop(int* _top);
	LinkStackNode* getNext();
	void setNext(LinkStackNode* _next);

private:
	int* top;
	LinkStackNode* next;
};

#endif // !LINKSTACHNODE_H
