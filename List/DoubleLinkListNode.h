#pragma once

#ifndef DOUBLELINKLISTNODE_H
#define DOUBLELINKLISTNODE_H

class DoubleLinkListNode {
public:
	DoubleLinkListNode();
	~DoubleLinkListNode();

	DoubleLinkListNode* getPrior();
	void setPrior(DoubleLinkListNode* _prior);
	int getData();
	void setData(int _data);
	DoubleLinkListNode* getNext();
	void setNext(DoubleLinkListNode* _next);

private:
	DoubleLinkListNode* prior;
	int data;
	DoubleLinkListNode* next;
};



#endif // !DOUBLELINKLISTNODE_H
