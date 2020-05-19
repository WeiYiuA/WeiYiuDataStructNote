#include "DoubleLinkListNode.h"
#include "DoubleCircularLinkList.h"
#include <iostream>
using std::cout; using std::endl;


DoubleCircularLinkList::DoubleCircularLinkList() {
	this->head = new DoubleLinkListNode();
	this->head->setNext(this->head);
	this->head->setPrior(this->head);
	this->rear = this->head;
}

DoubleCircularLinkList::~DoubleCircularLinkList() {
	this->head = nullptr;
	this->rear = nullptr;
}

DoubleLinkListNode* DoubleCircularLinkList::getHead() {
	return this->head;
}

void DoubleCircularLinkList::setHead(DoubleLinkListNode* _head) {
	this->head = _head;
}

DoubleLinkListNode* DoubleCircularLinkList::getRear() {
	return this->rear;
}

void DoubleCircularLinkList::setRear(DoubleLinkListNode* _rear) {
	this->head = _rear;
}


void DoubleCircularLinkList::InitDoubleCircularLinkList() {
	this->head = new DoubleLinkListNode();
	this->head->setNext(this->head);
	this->head->setPrior(this->head);
	this->rear = this->head;
}

void DoubleCircularLinkList::CreateDoubleCircularLinkList(int nums[], int n) {
	this->head = new DoubleLinkListNode();
	this->head->setNext(this->head);
	this->head->setPrior(this->head);
	this->rear = this->head;
	DoubleLinkListNode* CreateNode;

	for (int i = n - 1; i >= 0; i--) {
		CreateNode = new DoubleLinkListNode();
		CreateNode->setData(nums[i]); 
		CreateNode->setNext(this->head->getNext());
		CreateNode->setPrior(this->head);

		this->head->getNext()->setPrior(CreateNode);
		this->head->setNext(CreateNode);
		if (i == n - 1) this->rear = CreateNode;
	}
}

void DoubleCircularLinkList::ShowDoubleCircularLinkList() {
	DoubleLinkListNode* ShowNode = this->head;
	if (ShowNode->getNext() == this->head) cout << "±íÎª¿Õ";
	else {
		while (ShowNode->getNext() != this->head) {
			ShowNode = ShowNode->getNext();
			cout << ShowNode->getData() << "\t";
		}
	}
	cout << endl;

}

int DoubleCircularLinkList::LengthDoubleCircularLinkList(){
	DoubleLinkListNode* LengthNode = this->head;
	int length = 0;
	while (LengthNode->getNext() != this->head) {
		length++;
		LengthNode = LengthNode->getNext();
	}
	return length;
}

void DoubleCircularLinkList::InsertDoubleCircularLinkLis(int _e, int _n){
	int InsertLength = 0;
	DoubleLinkListNode* InsertNode = this->head;
	while (InsertNode->getNext() != this->head && InsertLength < _n - 1) {
		InsertLength++;
		InsertNode = InsertNode->getNext();
	}
	if (_n < 1 || _n > InsertLength + 1) cout << "²åÈëÎ»ÖÃ´íÎó£¡" << endl;
	else {
		DoubleLinkListNode* InsertNewNode = new DoubleLinkListNode();
		InsertNewNode->setData(_e);
		InsertNewNode->setNext(InsertNode->getNext() );
		InsertNewNode->setPrior(InsertNode->getNext()->getPrior());
		if (InsertNode == this->rear) this->rear = InsertNewNode;
		InsertNode->getNext()->setPrior(InsertNewNode);
		InsertNode->setNext(InsertNewNode);
	}
}

int DoubleCircularLinkList::DeleteDoubleCircularLinkLis(int _n){
	int DeleteLength = 0;
	DoubleLinkListNode* DeleteNode = this->head;
	while (DeleteNode->getNext() != this->head && DeleteLength < _n - 1) {
		DeleteLength++;
		DeleteNode = DeleteNode->getNext();
	}
	//cout << "!!!!!" << DeleteLength;
	if (_n < 1 || _n > DeleteLength + 1 || DeleteNode == this->rear || this->head == this->rear) cout << "É¾³ýÎ»ÖÃ´íÎó£¡" << endl;
	else {
		int DeleteNum = 0;
		DoubleLinkListNode* DNode = DeleteNode->getNext();

		DeleteNum = DNode->getData();
		if (DNode == this->rear) {
			this->rear = DeleteNode;
			this->rear->setNext(this->head);
			this->head->setPrior(this->rear);
		}
		else {
			DeleteNode->setNext(DNode->getNext());
			DNode->getNext()->setPrior(DeleteNode);
		}
		delete DNode;
		return DeleteNum;
	}
	return -1;
}

int DoubleCircularLinkList::LocateDoubleCircularLinkList(int _e){
	DoubleLinkListNode* LocateNode = this->head;
	int LocateNum = 0;
	while (LocateNode->getNext() != this->head) {
		LocateNum++;
		LocateNode = LocateNode->getNext();
		if (LocateNode->getData() == _e) return LocateNum;
	}
	return -1;
}

void DoubleCircularLinkList::DestroyDoubleCircularLinkLis(){
	DoubleLinkListNode* DestroyNode = this->head;
	while (DestroyNode->getNext() != this->head) {
		DoubleLinkListNode* DeleteNode = DestroyNode->getNext();
		DestroyNode->setNext(DeleteNode->getNext());
		delete DeleteNode;
	}
	this->head->setNext(this->head);
	this->head->setPrior(this->head);
	this->rear = this->head;
}
