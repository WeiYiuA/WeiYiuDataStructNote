#pragma once

#ifndef LINKSTACHNODE_H
#define LINKSTACHNODE_H

/*
Time:2020-05-20
Author:WeiYiu
C++ Á´Õ»½áµã int
*/

class LinkStackNode {
public:
	LinkStackNode();
	~LinkStackNode();
	int getData();
	void setData(int _data);
	LinkStackNode* getNext();
	void setNext(LinkStackNode* _next);

private:
	int data;
	LinkStackNode* next;
};

#endif // !LINKSTACHNODE_H
