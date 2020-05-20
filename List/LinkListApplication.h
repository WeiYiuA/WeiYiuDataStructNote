#pragma once

#ifndef LINKLISTAPPLICATION_H
#define LINKLISTAPPLICATION_H

#include "LinkListNode.h"
#include "LinkList.h"
#include <iostream>


/*
Time:2020-05-17
Author:WeiYiu
C++ 单链表反转 链表应用
*/

class LinkListApplication : public LinkList {
public:
	LinkListApplication();
	LinkList* reverseLinkList(LinkListApplication* _head);

private:
	LinkListNode* head;
};

#endif // !LINKLISTAPPLICATION_H
