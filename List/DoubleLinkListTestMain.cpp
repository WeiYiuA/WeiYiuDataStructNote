#include "DoubleLinkList.h"
#include <iostream>
using std::cout;

int DoubleLinkListTestMain(){
	DoubleLinkList doubleLinkList;
	int nums[] = { 0,1,2,3,4,5,6,7,8,9 };
	doubleLinkList.CreateDoubleLinkListNode(nums, 10);
	cout << "-----------------------------------" << "\n";
	cout << doubleLinkList.LocateDoubleLinkList(1) << "\n";
	cout << doubleLinkList.LocateDoubleLinkList(6) << "\n";
	cout << doubleLinkList.LocateDoubleLinkList(112) << "\n";
	cout << doubleLinkList.getHead()->getNext()->getNext()->getNext()->getPrior()->getData() << "\n";
	doubleLinkList.ShowDoubleLinkList();
	cout << doubleLinkList.DeleteDoubleLinkList(10) << "\n";

	cout << doubleLinkList.LengthDoubleLinkList() << "\n";
	doubleLinkList.InsertDoubleLinkList(9, 10);
	doubleLinkList.InsertDoubleLinkList(10, 11);
	doubleLinkList.ShowDoubleLinkList();
	cout << doubleLinkList.LengthDoubleLinkList() << "\n";
	cout << "-----------------------------------" << "\n";
	cout << doubleLinkList.DeleteDoubleLinkList(12) << "\n";
	doubleLinkList.ShowDoubleLinkList();
	cout << doubleLinkList.DeleteDoubleLinkList(12) << "\n";
	//cout << doubleLinkList.DeleteDoubleLinkList(12) << "\n";

	cout << "-----------------------------------" << "\n";
	DoubleLinkList Dlist;
	Dlist.InsertDoubleLinkList(1, 1);
	//Dlist.DeleteDoubleLinkList(0);
	Dlist.DeleteDoubleLinkList(1);
	Dlist.DeleteDoubleLinkList(2);
	Dlist.ShowDoubleLinkList();
	cout << "-----------------------------------" << "\n";
	int DestroyNums[] = { 1, 2, 3, 4, 5, 6 };
	DoubleLinkList DestroyList;
	DestroyList.CreateDoubleLinkListNode(DestroyNums, 6);
	DestroyList.ShowDoubleLinkList();
	DestroyList.DestroyDoubleLinkList();
	DestroyList.ShowDoubleLinkList();
	DestroyList.InsertDoubleLinkList(1, 1);
	DestroyList.ShowDoubleLinkList();
	DestroyList.DeleteDoubleLinkList(2);
	DestroyList.DeleteDoubleLinkList(0);
	cout << DestroyList.DeleteDoubleLinkList(1) << "\n";
	DestroyList.ShowDoubleLinkList();
	return 0;
}