#include "CircularLinkList.h"
#include <iostream>
using std::cout; using std::endl;

CircularLinkList::CircularLinkList(){
	this->head = new LinkListNode();
	this->head->setNext(this->head);
	this->rear = this->head;
}

CircularLinkList::~CircularLinkList()
{
}

LinkListNode *CircularLinkList::getHead() {
	return this->head;
}

void CircularLinkList::setHead(LinkListNode* _node) {
	this->head = _node;
}

LinkListNode* CircularLinkList::getRear() {
	return this->rear;
}

void CircularLinkList::setRear(LinkListNode* _node) {
	this->rear = _node;
}

void CircularLinkList::InitCircularLinkList() {
	this->head = new LinkListNode();
	this->head->setNext(this->head);
	this->rear = this->head;
}

void CircularLinkList::CreateCircularLinkList(int num[], int n) {
	this->head = new LinkListNode();
	this->head->setNext(this->head);
	this->rear = this->head;

	LinkListNode* CeeateNode;
	for (int i = n - 1; i >= 0; i--) {
		CeeateNode = new LinkListNode();
		CeeateNode->setData(num[i]);
		CeeateNode->setNext(this->head->getNext());
		this->head->setNext(CeeateNode);
		if (i == n - 1) {
			this->rear = CeeateNode;
			this->rear->setNext(this->head);
		}
	}
}

void CircularLinkList::ShowCircularLinkList() {
	LinkListNode* ShowNode = this->head->getNext();
	if (this->head == this->rear) cout << "±íÎª¿Õ" << endl;
	else {
		while (ShowNode != this->rear->getNext()) {
			cout << ShowNode->getData() << "\t";
			ShowNode = ShowNode->getNext();
		}
		cout << endl;
	}
}

int CircularLinkList::LengthCircularLinkList() {
	int length = 0;
	LinkListNode* LenSNode = this->head->getNext();
	while (LenSNode != this->rear->getNext()) {
		length++;
		LenSNode = LenSNode->getNext();
	}
	return length;
}

void CircularLinkList::InsertCircularLinkList(int _e, int _n) {
	int InsertLength = 0;
	LinkListNode *InsertNode = this->head;
	while (InsertNode->getNext() != this->rear->getNext() && InsertLength < _n-1){
		InsertNode = InsertNode->getNext();
		InsertLength++;
	}
	if(_n < 1 || _n > InsertLength + 1) cout << "²åÈëÎ»ÖÃ´íÎó£¡" << endl;
	else if (InsertNode == this->rear) {
		LinkListNode* InsertNewNode = new LinkListNode();
		InsertNewNode->setData(_e);
		InsertNewNode->setNext(InsertNode->getNext());
		InsertNode->setNext(InsertNewNode);
		this->rear = InsertNewNode;
	}
	else {
		LinkListNode* InsertNewNode = new LinkListNode();
		InsertNewNode->setData(_e);
		InsertNewNode->setNext(InsertNode->getNext());
		InsertNode->setNext(InsertNewNode);
	}
}

int CircularLinkList::DeleteCircularLinkList(int _n) {
	LinkListNode* DeleteNode = this->head;
	int DeleteLength = 0;
	while (DeleteNode->getNext() != this->head && DeleteLength < _n - 1) {
		DeleteNode = DeleteNode->getNext();
		DeleteLength++;
	}
	if (_n < 1 || _n > DeleteLength+1 || this->head == this->rear) cout << "É¾³ýÎ»ÖÃ´íÎó£¡";
	else {
		int ReDeleteNum = 0;
		LinkListNode *p = DeleteNode->getNext();
		ReDeleteNum = p->getData();
		DeleteNode->setNext(p->getNext());
		if (p == this->rear) this->rear = DeleteNode;
		delete p;
		return ReDeleteNum;
	}
	return 0;
}

int CircularLinkList::LocateCircularLinkList(int _e){
	LinkListNode* LocateNode = this->head;
	int LocateLength = 0;
	while (LocateNode->getNext() != this->head) {
		LocateLength++;
		LocateNode = LocateNode->getNext();
		if (LocateNode->getData() == _e) return LocateLength;
	}
	return -1;
}

void CircularLinkList::DestroyCircularLinkList() {
	LinkListNode* DestroyNode = this->head;
	while (DestroyNode->getNext() != this->rear) {
		LinkListNode *p = DestroyNode;
		DestroyNode = DestroyNode->getNext();
		delete p;
	}
	this->rear = this->head;
}