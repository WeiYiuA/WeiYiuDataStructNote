#include "LinkList.h"
#include <iostream>
using std::cout; using std::endl;

LinkList::LinkList(){
	this->head = new LinkListNode;
}

LinkList::~LinkList() {
}

LinkListNode* LinkList::getHead(){
	return this->head;
}

void LinkList::setHead(LinkListNode* _head) {
	this->head = _head;
}

void LinkList::InitLinkList() {
	//LinkListNode *initNode = new LinkListNode;
	//initNode->setNext(nullptr);
	//this->head->setData(-1);
	//this->head->setNext(initNode);

	this->head = new LinkListNode;
}

void LinkList::CreateLinkList(int nums[], int n) {
	this->head = new LinkListNode;
	//this->head->setNext(nullptr);
	LinkListNode* createNode;
	for (int i = n-1; i >= 0; i--) {
		createNode = new LinkListNode();
		createNode->setData(nums[i]);
		createNode->setNext(this->getHead()->getNext());
		this->getHead()->setNext(createNode);
	}
}

void LinkList::ShowLinkList(){
	LinkListNode* showNode = this->head;
	if (showNode->getNext() == nullptr) cout << "±íÎª¿Õ" << endl;
	else {
		while (showNode->getNext() != nullptr) {
			cout << showNode->getNext()->getData() << "\t";
			showNode = showNode->getNext();
		}
		cout << endl;
	}
}

int LinkList::LengthLinkList(){
	int nodeLength = 0;
	LinkListNode *LNode = this->head;
	while (LNode->getNext()!=nullptr) {
		nodeLength++;
		LNode = LNode->getNext();
	}
	return nodeLength;
}

void LinkList::InsertLinkList(int _e, int _n) {
	int insertLength = 0;
	LinkListNode *INode = this->head;
	while (INode != nullptr && insertLength < _n-1) {
		INode = INode->getNext();
		insertLength++;
	}
	if (INode == nullptr || _n < 1) cout << "²åÈëÎ»ÖÃ´íÎó£¡" << endl;
	else {
		LinkListNode* insertNode = new LinkListNode();
		insertNode->setData(_e);
		insertNode->setNext(INode->getNext());
		INode->setNext(insertNode);
	}
}

int LinkList::DeleteLinkList(int  _n) {
	int insertLength = 0;
	LinkListNode* DNode = this->head;
	while (DNode != nullptr && insertLength < _n - 1) {
		DNode = DNode->getNext();
		insertLength++;
	}
	if (DNode == nullptr || DNode->getNext() == nullptr) cout << "É¾³ýÎ»ÖÃ´íÎó£¡" << endl;
	else {
		int DNum = DNode->getNext()->getData();
		DNode->setNext(DNode->getNext()->getNext());
		return DNum;
	}
	return 0;
}

int LinkList::LocateLinkList(int _findeNum){
	LinkListNode* FNode = this->head->getNext();
	int findeNum = 0;
	while (FNode != nullptr) {
		findeNum++;
		if (FNode->getData() == _findeNum) return findeNum;
		FNode = FNode->getNext();
	}
	return -1;
	
}

void LinkList::DestroyLinkList() {
	LinkListNode* DesrNode = this->head->getNext();
	LinkListNode* d;
	while (DesrNode != nullptr) {
		d = DesrNode;
		DesrNode = DesrNode->getNext();
		delete d;
	}
	this->head->setNext(nullptr);
}