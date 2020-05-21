#pragma once

#ifndef LINKQUEUENODE_H
#define LINKQUEUENODE_H

class LinkQueueNode {
public:
	LinkQueueNode();
	~LinkQueueNode();
	int getData();
	void setData(int _data);
	LinkQueueNode* getNext();
	void setNext(LinkQueueNode* _next);

private:
	int data;
	LinkQueueNode* next;
};

#endif // !LINKQUEUENODE_H
