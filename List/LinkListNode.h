#pragma once
#ifndef LINKLISTNODE_H
#define LINKLISTNODE_H

class LinkListNode {
public:
	LinkListNode();
	~LinkListNode();

	int getData();
	void setData(int _data);
	LinkListNode* getNext();
	void setNext(LinkListNode* _next);

private:
	int data;
	LinkListNode* next;
};


#endif // !LINKLISTNODE_H

