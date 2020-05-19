#include "ArrayList.h"
#include <iostream>
using std::cout;
using std::endl;

ArrayList::ArrayList() {
	this->data = nullptr;
	this->length = 0;
	this->maxLength = 0;
};

ArrayList::ArrayList(int _n) {
	this->data = new int[_n];
	this->maxLength = _n;
	this->length = 0;
}

ArrayList::ArrayList(int* _data, int _length, int _maxLength) {
	this->data = _data;
	this->maxLength = _maxLength;
	this->length = _length;
}

ArrayList::~ArrayList() {
}

int* ArrayList::getData() {
	return this->data;
}

void ArrayList::setData(int* _data) {
	this->data = _data;
}

int ArrayList::getLength() {
	return this->length;
}

void ArrayList::setLength(int _length) {
	this->length = _length;
}

void ArrayList::InitArrayList(int _n) {
	this->length = 0;
	this->data = new int[_n];
	this->maxLength = _n;
}

void ArrayList::CreateArrayList(int nums[], int _n) {
	this->data = new int[_n];
	this->length = 0;
	for (int i = 0; i < _n; i++) {
		data[this->length++] = nums[i];
	}
}

void ArrayList::ShowArrayList() {
	if(this->length == 0)  cout << "表为空" << endl;
	else {
		for (int n = 0; n < this->length; n++) {
			cout << this->data[n] << "\t";
		}
		cout << endl;
	}
}

int ArrayList::LengthArrayList()
{
	return this->length;
}

void ArrayList::InsertArrayList(int _e, int _n) {
	if (this->length >= this->maxLength) cout << "Array已满无法插入！" << endl;
	else if (_n < 1 || _n > this->length + 1) cout << "参数输入错误！" << endl;
	else {
		for (int n = this->length - 1; n >= _n - 1; n--) {
			this->data[n + 1] = this->data[n];
		}
		this->data[_n - 1] = _e;
		this->length++;
	}
}

int ArrayList::DeleteArrayList(int _n) {
	if (this->length == 0) cout << "Array为空无法删除" << endl;
	else if (_n < 1 || _n > this->length + 1) cout << "参数输入错误！" << endl;
	else {
		int reNum = this->data[_n - 1];
		for (int i = _n - 1; i < this->length - 1; i++) this->data[i] = this->data[i + 1];
		this->length--;
		return reNum;
	}
	return -1;
}

int ArrayList::LocateArrayList(int _finde) {
	if (this->length == 0) cout << "Array为空无法查询！" << endl;
	else {
		for (int i = 0; i < this->length + 1; i++) {
			if (this->data[i] == _finde) return i + 1;
		}
	}
	return -1;
}

void ArrayList::DestroyArrayList() {
	delete[] this->data;
	this->maxLength = 0;
	this->length = 0;
}
