#pragma once


#ifndef DOUBLELINKLIST_H
#define DOUBLELINKLIST_H

#include "DoubleLinkListNode.h"

/*
Time:2020-05-19
Author:WeiYiu
C++ 双链表 俩个指针 next prior 一个指向下一个结点，一个指向前一个结点
可以通过任何一个结点遍历整个链表
*/

class DoubleLinkList {
public:
	DoubleLinkList();
	~DoubleLinkList();
	DoubleLinkListNode* getHead();
	void setHead(DoubleLinkListNode* _head);

	void InitDoubleLinkListNode();
	void CreateDoubleLinkListNode(int nums[], int n);
	void ShowDoubleLinkList();
	int LengthDoubleLinkList();
	void InsertDoubleLinkList(int e, int n);
	int DeleteDoubleLinkList(int n);
	int LocateDoubleLinkList(int _e);
	void DestroyDoubleLinkList();

private:
	DoubleLinkListNode* head;
};

#endif // !DOUBLELINKLIST_H
