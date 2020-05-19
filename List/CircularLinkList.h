#pragma once

#include "LinkListNode.h"

#ifndef CIRCULARLINKLIST_H
#define CIRCULARLINKLIST_H

/*
Time:2020-05-18
Author:WeiYiu
C++ ѭ���������ͷ��� int ͷβָ��head rear
ѭ������ ��ͬ����ͨ������ͨ������ַ==nullptr �ж��Ƿ������
����ά��һ��ָ��β����ָ�룬 ͨ�� head == rear �ж��Ƿ������
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