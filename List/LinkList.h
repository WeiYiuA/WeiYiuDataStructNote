#pragma once

#ifndef LINKLIST_H
#define LINKLIST_H

#include "LinkListNode.h"

/*
Time:2020-05-17
Author:WeiYiu
C++ 单链表带头结点 int
*/

class LinkList {
public:
	LinkList();
	~LinkList();
	LinkListNode* getHead();
	void setHead(LinkListNode* _next);

	void InitLinkList();
	void CreateLinkList(int nums[], int n);
	void ShowLinkList();
	int LengthLinkList();
	void InsertLinkList(int _e, int _n);
	int DeleteLinkList(int _n);
	int LocateLinkList(int _finde);
	void DestroyLinkList();

private:
	LinkListNode* head;
};

#endif // !LINKLIST_H
