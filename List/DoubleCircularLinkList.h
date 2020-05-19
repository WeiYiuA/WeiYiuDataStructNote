#pragma once

#include "DoubleLinkListNode.h"

#ifndef DOUBLECIRCULARLINKLINST_H
#define DOUBLECIRCULARLINKLINST_H

/*
Time:2020-05-19
Author:WeiYiu
C++ Ñ­»·Ë«Á´±í
*/

class DoubleCircularLinkList {
public:
	DoubleCircularLinkList();
	~DoubleCircularLinkList();
	DoubleLinkListNode* getHead();
	void setHead(DoubleLinkListNode* _head);
	DoubleLinkListNode* getRear();
	void setRear(DoubleLinkListNode* _rear);

	void InitDoubleCircularLinkList();
	void CreateDoubleCircularLinkList(int nums[], int n);
	void ShowDoubleCircularLinkList();
	int LengthDoubleCircularLinkList();
	void InsertDoubleCircularLinkLis(int _e, int _n);
	int DeleteDoubleCircularLinkLis(int _n);
	int LocateDoubleCircularLinkList(int _e);
	void DestroyDoubleCircularLinkLis();

private:
	DoubleLinkListNode* head;
	DoubleLinkListNode* rear;
};

#endif // !DOUBLECIRCULARLINKLINST_H
