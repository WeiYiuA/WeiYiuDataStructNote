#pragma once

#include "LinkListNode.h"

#ifndef CIRCULARLINKLIST_H
#define CIRCULARLINKLIST_H

/*
Time:2020-05-18
Author:WeiYiu
C++ 循环单链表带头结点 int 头尾指针head rear
循环链表 不同与普通的链表，通过结点地址==nullptr 判断是否遍历完
而是维护一个指向尾结点的指针， 通过 head == rear 判断是否遍历完
*/

class CircularLinkList{
public:
	CircularLinkList();
	~CircularLinkList();
	LinkListNode* getHead();
	void setHead(LinkListNode* _node);
	LinkListNode* getRear();
	void setRear(LinkListNode* _node);

	void InitCircularLinkList();
	void CreateCircularLinkList(int num[], int n);
	void ShowCircularLinkList();
	int LengthCircularLinkList();
	void InsertCircularLinkList(int e, int n);
	int DeleteCircularLinkList(int n);
	int LocateCircularLinkList(int _e);
	void DestroyCircularLinkList();


private:
	LinkListNode* head;
	LinkListNode* rear;
};


#endif // !CIRCULARLINKLIST_H