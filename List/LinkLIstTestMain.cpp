#include "LinkList.h"
#include <iostream>
using std::cout;

int LinkListTestMain() {
	LinkList linkList;
	//cout << linkList.getHead()->getData() << "\n";
	if (linkList.getHead() == nullptr) cout << "1" << "\n";
	linkList.InitLinkList();
	//if (linkList.getHead()->getNext() == nullptr) cout << "1";
	//cout << linkList.getHead()->getdata();

	int nums[] = { 1,2,3,4,5 };
	linkList.CreateLinkList(nums, 5);
	cout << linkList.LocateLinkList(2) << "\n";
	cout << linkList.LocateLinkList(5) << "\n";
	cout << linkList.LocateLinkList(6) << "\n";
	cout << "------------------------------" << "\n";
	linkList.ShowLinkList();
	//linkList.InsertLinkList(100, 1);
	cout << linkList.LengthLinkList() << "\n";
	cout << "------------------------------" << "\n";
	linkList.ShowLinkList();
	cout << "------------------------------" << "\n";
	linkList.DestroyLinkList();
	linkList.ShowLinkList();
	cout << "-------------------------------" << "\n";
	LinkList iList;
	iList.InitLinkList();
	for(int i = 1; i < 20; i++) iList.InsertLinkList(i, i);
	cout << iList.LengthLinkList();
	iList.InsertLinkList(1, 22);
	iList.ShowLinkList();
	for (int i = 1; i < 20; i++) cout << iList.DeleteLinkList(1) << "\n";
	iList.ShowLinkList();
	return 0;
}