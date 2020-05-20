#pragma once

#ifndef STACK_H
#define STACK_H

class Stack{
public:
	Stack();
	~Stack();
	int* getTop();
	void setTop(int* _top);
	int getLength();
	void setLength(int _length);
	int getMaxStackLength();
	void setMaxStackLength(int _MaxStackLength);

	void InitStack(int _maxLength);
	void PushStack(int _n);
	int PopStack();
	int TopStack();
	bool StackEmpty();
	bool StackFull();

private:
	int* top;
	int length;
	int MaxStackLength;
};



#endif // !STACK_H