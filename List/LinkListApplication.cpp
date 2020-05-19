#include "LinkListApplication.h"
#include <iostream>

LinkListApplication::LinkListApplication(){
	this->head = new LinkListNode; 
}

//Á´±í·´×ª
LinkList* LinkListApplication::reverseLinkList(LinkListApplication* _head) {
	LinkListNode* reverseNode = _head->getHead()->getNext();
	LinkListApplication* reverseLinkList = new LinkListApplication;
	LinkListNode* temNode;
	while (reverseNode != nullptr) {
		temNode = reverseNode;
		reverseNode = reverseNode->getNext();
		temNode->setNext(reverseLinkList->getHead()->getNext());
		reverseLinkList->getHead()->setNext(temNode);
	}
	return reverseLinkList;
}


int LinkListApplicationTestMain() {
	LinkListApplication list;
	LinkList l;
	list.InitLinkList();
	int nums[] = { 1,2,3,4,5 ,12,3,4,5};
	list.CreateLinkList(nums, 9);
	l.setHead(list.getHead());
	list.ShowLinkList();
	l.ShowLinkList();
	list.reverseLinkList(&list)->ShowLinkList();
	return 0;
}