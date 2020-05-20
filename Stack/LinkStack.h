#pragma once

#ifndef LINKSTACK_H
#define LINKSTACK_H

#include "LinkStcakNode.h"

/*
Time:2020-05-20
Author:WeiYiu
C++ Á´Õ» int
*/

class LinkStack {
public:
	LinkStack();
	~LinkStack();
	LinkStackNode* getTop();
	void setTop(LinkStackNode* _top);

	void InitLinkStack();
	void PushLinkStack(int _n);
	int PopLinkStack();
	bool LinkStackEmpty();
	void DestroyLinkStack();

private:
	LinkStackNode* top;
};

#endif // !LINKSTACK_H
