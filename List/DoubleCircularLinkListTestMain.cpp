#include "DoubleCircularLinkList.h"
#include <iostream>
using std::cout;

int DoubleCircularLinkListTestMain() {
	DoubleCircularLinkList DCList;
	DCList.ShowDoubleCircularLinkList();
	cout << DCList.LengthDoubleCircularLinkList() << "\n";
	cout << "---------------------------------" << "\n";
	int nums[] = { 1,2,3,4,5,6 };
	DCList.CreateDoubleCircularLinkList(nums, 6);
	DCList.ShowDoubleCircularLinkList();
	cout << DCList.LocateDoubleCircularLinkList(3) << "\n";
	cout << DCList.LocateDoubleCircularLinkList(5) << "\n";
	cout << DCList.LocateDoubleCircularLinkList(1) << "\n";
	cout << "---------------------------------" << "\n";
	cout << DCList.getRear()->getNext()->getNext()->getData() << "\n"; 
	cout << DCList.getHead()->getPrior()->getPrior()->getData() << "\n";
	cout << DCList.LengthDoubleCircularLinkList() << "\n";
	//DCList.InsertDoubleCircularLinkLis(1, 1);
	DCList.InsertDoubleCircularLinkLis(1, 0);
	DCList.InsertDoubleCircularLinkLis(1, 8);
	DCList.InsertDoubleCircularLinkLis(7, 7);
	DCList.InsertDoubleCircularLinkLis(0, 1);
	cout << DCList.getRear()->getNext()->getNext()->getNext()->getData() << "\n" ;
	DCList.ShowDoubleCircularLinkList();
	cout << DCList.LengthDoubleCircularLinkList() << "\n";
	cout << DCList.DeleteDoubleCircularLinkLis(2) << "\n";
	
	cout << "---------------------------------" << "\n";
	DCList.ShowDoubleCircularLinkList();
	cout << DCList.DeleteDoubleCircularLinkLis(7) << "\n";
	cout << DCList.DeleteDoubleCircularLinkLis(6) << "\n";
	cout << DCList.DeleteDoubleCircularLinkLis(5) << "\n";
	cout << DCList.DeleteDoubleCircularLinkLis(5) << "\n";
	cout << DCList.DeleteDoubleCircularLinkLis(0) << "\n";
	DCList.ShowDoubleCircularLinkList();

	cout << "---------------------------------" << "\n";
	DoubleCircularLinkList DeleteList;
	DeleteList.InsertDoubleCircularLinkLis(1, 1);
	DeleteList.ShowDoubleCircularLinkList();
	DeleteList.DeleteDoubleCircularLinkLis(2);
	DeleteList.DeleteDoubleCircularLinkLis(1);
	DeleteList.ShowDoubleCircularLinkList();

	DeleteList.DestroyDoubleCircularLinkLis();
	DeleteList.ShowDoubleCircularLinkList();
	return 0;
}