#include "CircularLinkList.h"
#include <iostream>
using std::cout;

int CircluarLinkListTestMain() {
	CircularLinkList circularLinkList;
	int nums[] = { 1,2,3,4,5,6,7,8,9,10 };
	circularLinkList.InitCircularLinkList();
	circularLinkList.CreateCircularLinkList(nums, 10);
	circularLinkList.ShowCircularLinkList();
	cout << "----------------------------------------" << "\n";
	cout << circularLinkList.LocateCircularLinkList(1) << "\n";
	cout << circularLinkList.LocateCircularLinkList(6) << "\n";
	cout << circularLinkList.LocateCircularLinkList(11) << "\n";
	cout << circularLinkList.DeleteCircularLinkList(10) << "\n";
	cout << circularLinkList.DeleteCircularLinkList(0) << "\n";
	for (int i = 0; i < 10; i++)cout << circularLinkList.DeleteCircularLinkList(1) << "\n";
	cout << circularLinkList.DeleteCircularLinkList(11) << "\n";
	circularLinkList.ShowCircularLinkList();
	//circularLinkList.InsertCircularLinkList(1, 0);
	//circularLinkList.InsertCircularLinkList(1, 2);
	//circularLinkList.InsertCircularLinkList(1, 3);

	circularLinkList.InsertCircularLinkList(1, 0);
	circularLinkList.InsertCircularLinkList(1, 1);
	circularLinkList.InsertCircularLinkList(2, 2);
	circularLinkList.InsertCircularLinkList(2, 4);
	circularLinkList.ShowCircularLinkList();
	cout << "----------------------------------------" << "\n";
	//cout << circularLinkList.getRear()->getNext()->getNext()->getData() << "\n";
	cout << circularLinkList.LengthCircularLinkList() << "\n";
	circularLinkList.InsertCircularLinkList(-1, 10);
	circularLinkList.InsertCircularLinkList(12, 12);
	cout << circularLinkList.getRear()->getNext()->getNext()->getNext()->getData() << "\n";
	LinkListNode* showNode = circularLinkList.getRear();
	cout << "----------------------------------------" << "\n";
	circularLinkList.ShowCircularLinkList();
	int i = 0;
	while (i < 20) {
		cout << showNode->getData() << "\n";
		showNode = showNode->getNext();
		i++;
	}
	circularLinkList.ShowCircularLinkList();
	cout << "----------------------------------------" << "\n";
	CircularLinkList clist;
	clist.InitCircularLinkList();
	clist.InsertCircularLinkList(1, 1);
	clist.InsertCircularLinkList(2, 1);
	clist.InsertCircularLinkList(3, 1);
	clist.InsertCircularLinkList(4, 4);
	clist.ShowCircularLinkList();
	//cout << clist.getRear()->getNext()->getNext()->getData() << "\n";
	cout << "----------------------------------------" << "\n";
	cout << clist.DeleteCircularLinkList(1);
	cout << clist.DeleteCircularLinkList(1);
	cout << clist.DeleteCircularLinkList(1);
	cout << clist.DeleteCircularLinkList(1) << "\n";
	clist.ShowCircularLinkList();
	cout << "----------------------------------------" << "\n";
	CircularLinkList Dlist;
	cout << Dlist.DeleteCircularLinkList(0) << "\n";
	int DestroyNums[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
	Dlist.CreateCircularLinkList(DestroyNums, 8);
	cout << Dlist.DeleteCircularLinkList(8) << "\n";
	cout << Dlist.DeleteCircularLinkList(1) << "\n";
	Dlist.ShowCircularLinkList();
	Dlist.DestroyCircularLinkList();
	Dlist.ShowCircularLinkList();
	return 0;
}