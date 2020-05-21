#pragma once

#ifndef LINKQUEUE_H
#define LINKQUEUE_H

#include "LinkQueueNode.h"

/*
Time:2020-05-21
Author:WeiYiu
C++ 链队列 int 
个人觉得用处不大，链式存储就是为了方便插入、删除，
而队列，就是受限制的顺序表！只能在队头队尾操作！
链式存储没有体现出，该有的亚子！链栈亦是如此！
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
