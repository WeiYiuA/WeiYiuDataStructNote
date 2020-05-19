#include "ArrayList.h"
#include <iostream>
using std::cout;

int ArrayListTestMain() {
	ArrayList arrayList(100);
	//arrayList.InsertArrayList(1, 1);
	for (int i = 1; i < 101; i++) {
		arrayList.InsertArrayList(i, i);
	}
	cout << arrayList.DeleteArrayList(50) << "\n";;
	cout << arrayList.LengthArrayList() << "\n";
	arrayList.ShowArrayList();

	ArrayList arr;
	arr.InitArrayList(10);
	cout << arr.LengthArrayList() << "\n";
	int num[] = { 1,2,3,4,5,6,7,8};
	arr.CreateArrayList(num, 8);
	arr.ShowArrayList();

	arr.DestroyArrayList();
	cout << arr.LengthArrayList() << "\n";
	arr.ShowArrayList();
	return 0;
}