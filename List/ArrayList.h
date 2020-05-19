#pragma once

#ifndef ARRAYLIST_H
#define ARRAYLIST_H

/*
Time:2020-05-16
Author:WeiYiu
C++ Ë³Ðò±í int
*/

class ArrayList{
public:
	ArrayList();
	ArrayList(int _n);
	ArrayList(int* _data, int _length, int _maxLength);
	~ArrayList();
	int* getData();
	void setData(int* _data);
	int getLength();
	void setLength(int _length);

	void InitArrayList(int n);
	void CreateArrayList(int nums[], int _n);
	void ShowArrayList();
	int LengthArrayList();
	void InsertArrayList(int _e, int _n);
	int DeleteArrayList(int _n);
	int LocateArrayList(int _finde);
	void DestroyArrayList();

private:
	int* data;
	int maxLength;
	int length;
};

#endif // !ARRAYLIST_H
