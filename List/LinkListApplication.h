#pragma once

#include "LinkListNode.h"
#include "LinkList.h"
#include <iostream>

#ifndef LINKLISTAPPLICATION_H
#define LINKLISTAPPLICATION_H

/*
Time:2020-05-17
Author:WeiYiu
C++ ������ת ����Ӧ��
*/

class LinkListApplication : public LinkList {
public:
	LinkListApplication();
	LinkList* reverseLinkList(LinkListApplication* _head);

private:
	LinkListNode* head;
};

#endif // !LINKLISTAPPLICATION_H
