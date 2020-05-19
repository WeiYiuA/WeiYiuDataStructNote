#include "DoubleLinkListNode.h"
#include "DoubleLinkList.h"
#include <iostream>
using std::cout; using std::endl;

DoubleLinkList::DoubleLinkList(){
	this->head = new DoubleLinkListNode();
}

DoubleLinkList::~DoubleLinkList() {
}

DoubleLinkListNode* DoubleLinkList::getHead()
{
	return this->head;
}

void DoubleLinkList::setHead(DoubleLinkListNode* _head)
{
	this->head = _head;
}

void DoubleLinkList::InitDoubleLinkListNode(){
	this->head = new DoubleLinkListNode;
}

void DoubleLinkList::CreateDoubleLinkListNode(int nums[], int n){
	this->head = new DoubleLinkListNode();
	DoubleLinkListNode* CreateNode;
	for (int i = n - 1; i >= 0; i--) {
		if (this->head->getNext() == nullptr) {
			CreateNode = new DoubleLinkListNode();
			CreateNode->setData(nums[i]);
			CreateNode->setNext(this->head->getNext());
			CreateNode->setPrior(this->head);
			this->head->setNext(CreateNode);
		}
		else {
			CreateNode = new DoubleLinkListNode();
			CreateNode->setData(nums[i]);
			CreateNode->setNext(this->head->getNext());
			CreateNode->setPrior(CreateNode->getNext()->getPrior());
			CreateNode->getNext()->setPrior(CreateNode);
			this->head->setNext(CreateNode);
		}
	}
}

void DoubleLinkList::ShowDoubleLinkList() {
	DoubleLinkListNode* ShowNode = this->head;
	if (ShowNode->getNext() == nullptr) cout << "±íÎª¿Õ£¡";
	else {
		while (ShowNode->getNext() != nullptr) {
			cout << ShowNode->getNext()->getData() << "\t";
			ShowNode = ShowNode->getNext();
		}
	}
	cout << endl;
}

int DoubleLinkList::LengthDoubleLinkList() {
	int length = 0;
	DoubleLinkListNode *LengthNode = this->head;
	while (LengthNode->getNext() != nullptr) {
		length++;
		LengthNode = LengthNode->getNext();
	}
	return length;

}

void DoubleLinkList::InsertDoubleLinkList(int _e, int _n) {
	DoubleLinkListNode* InsertNode = this->head;
	int InsertLength = 0;
	while (InsertNode->getNext() != nullptr && InsertLength < _n - 1) {
		InsertNode = InsertNode->getNext();
		InsertLength++;
	}
	if (_n < 1 || _n > InsertLength + 1) cout << "²åÈëÎ»ÖÃ´íÎó£¡" << endl;
	else if(InsertNode->getNext() == nullptr){
		DoubleLinkListNode* NewNode = new DoubleLinkListNode();
		NewNode->setData(_e);
		NewNode->setNext(nullptr);
		NewNode->setPrior(InsertNode);
		InsertNode->setNext(NewNode);
	}
	else {
		DoubleLinkListNode* NewNode = new DoubleLinkListNode();
		NewNode->setData(_e);
		NewNode->setNext(InsertNode->getNext());
		NewNode->setPrior(InsertNode->getPrior());
		InsertNode->getNext()->setPrior(NewNode);
		InsertNode->setNext(NewNode);
	}
}

int DoubleLinkList::DeleteDoubleLinkList(int _n) {
	int DeleteLength = 0;
	DoubleLinkListNode* DeleteNode = this->head;
	while (DeleteNode->getNext() != nullptr && DeleteLength < _n - 1) {
		DeleteNode = DeleteNode->getNext();
		DeleteLength++;
	}
	if (_n < 1 || _n > DeleteLength + 1 || DeleteNode->getNext() == nullptr) cout << "É¾³ýÎ»ÖÃ´íÎó!" << endl;
	else  {
		DoubleLinkListNode* DNode = DeleteNode->getNext();
		int DNum = DNode->getData();
		if (DNode->getNext() == nullptr) {
			DeleteNode->setNext(nullptr);
		}
		else {
			DeleteNode->setNext(DNode->getNext());
			DNode->getNext()->setPrior(DeleteNode);
		}
		delete DNode;
		return DNum;
	}
	return -1;
}

int DoubleLinkList::LocateDoubleLinkList(int _e){
	DoubleLinkListNode* LocateNode = this->head;
	int LocateLength = 0;
	while (LocateNode->getNext() != nullptr) {
		LocateLength++;
		LocateNode = LocateNode->getNext();
		if (LocateNode->getData() == _e) return LocateLength;
	}
	return -1;
}

void DoubleLinkList::DestroyDoubleLinkList() {
	DoubleLinkListNode* DestroyNode = this->head;
	while (DestroyNode->getNext() != nullptr) {
		DoubleLinkListNode* DNode = DestroyNode->getNext();
		DestroyNode = DNode->getNext();
		delete DNode;
	}
	this->head->setNext(nullptr);
}