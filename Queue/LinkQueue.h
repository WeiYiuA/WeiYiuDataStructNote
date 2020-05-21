#pragma once

#ifndef LINKQUEUE_H
#define LINKQUEUE_H

#include "LinkQueueNode.h"

/*
Time:2020-05-21
Author:WeiYiu
C++ ������ int 
���˾����ô�������ʽ�洢����Ϊ�˷�����롢ɾ����
�����У����������Ƶ�˳���ֻ���ڶ�ͷ��β������
��ʽ�洢û�����ֳ������е����ӣ���ջ������ˣ�
*/

class LinkQueue {
public:
	LinkQueue();
	~LinkQueue();
	LinkQueueNode* getFront();
	void setFront(LinkQueueNode* _front);
	LinkQueueNode* getRear();
	void setRear(LinkQueueNode* _rear);

	void InitLinkQueue();
	void EmLinkQueue(int _e);
	int DeLinkQueue();
	int LengthLinkQueue();
	bool EmptyLinkQueue();
	int Front();
	int Rear();
	void DestroyLinkQueue();

private:
	LinkQueueNode* front;
	LinkQueueNode* rear;
};

#endif // !LINKQUEUE_H
