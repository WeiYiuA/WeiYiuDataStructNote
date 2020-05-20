#include "Stack.h"
#include <iostream>
using std::cout; using std::endl;

Stack::Stack() {
	this->top = nullptr;
	this->length = 0;
	this->MaxStackLength = 0;
}

Stack::~Stack() {
}

int* Stack::getTop() {
	return this->top;
}

void Stack::setTop(int* _top) {
	this->top = _top;
}

int Stack::getLength() {
	return this->length;
}

void Stack::setLength(int _length) {
	this->length = _length;
}

int Stack::getMaxStackLength() {
	return this->MaxStackLength;
}

void Stack::setMaxStackLength(int _MaxStackLength) {
	this->MaxStackLength = _MaxStackLength;
}

void Stack::InitStack(int _n) {
	if (_n < 1) cout << "参数输入错误！";
	else {
		this->top = new int[_n];
		this->length = -1;
		this->MaxStackLength = _n;
	}
}

void Stack::PushStack(int _n) {
	if (this->length == this->MaxStackLength - 1) cout << "Stack已满，无法进栈！" << endl;
	else {
		this->length++;
		this->top[length] = _n;
	}
}

int Stack::PopStack() {
	if (this->length == -1) cout << "Stack为空，无法出栈!" << endl;
	else {
		int ReNum = this->top[this->length];
		this->length--;
		return ReNum;
	}
	return -1;
}

int Stack::TopStack() {
	if (this->length == -1) cout << "Stack为空，没有栈顶!" << endl;
	else {
		return this->top[this->length];
	}
	return -1;
}

bool Stack::StackEmpty(){
	return this->length == -1;
}

bool Stack::StackFull(){
	return this->length == this->MaxStackLength;
}


