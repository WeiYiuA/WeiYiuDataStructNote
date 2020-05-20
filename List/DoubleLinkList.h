#pragma once


#ifndef DOUBLELINKLIST_H
#define DOUBLELINKLIST_H

#include "DoubleLinkListNode.h"

/*
Time:2020-05-19
Author:WeiYiu
C++ ˫���� ����ָ�� next prior һ��ָ����һ����㣬һ��ָ��ǰһ�����
����ͨ���κ�һ����������������
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
