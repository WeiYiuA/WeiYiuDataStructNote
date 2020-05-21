#include "LinkQueue.h"
#include <iostream>
using std::cout;

int LinkQueueTestMain() {
	LinkQueue LQueue;
	LQueue.InitLinkQueue();
	cout << LQueue.LengthLinkQueue() << "\n";
	cout << LQueue.EmptyLinkQueue() << "\n";
	LQueue.EmLinkQueue(1);
	LQueue.EmLinkQueue(2); 
	LQueue.EmLinkQueue(3);
	cout << LQueue.EmptyLinkQueue() << "\n";
	cout << LQueue.LengthLinkQueue() << "\n";
	cout << "--------------------------------" << "\n";
	cout << LQueue.DeLinkQueue() << "\n";
	//cout << LQueue.DeLinkQueue() << "\n";
	cout << LQueue.LengthLinkQueue() << "\n";
	cout << LQueue.Front() << "\n";
	cout << LQueue.Rear() << "\n";
	cout << LQueue.DeLinkQueue() << "\n";
	LQueue.DestroyLinkQueue();
	cout << LQueue.EmptyLinkQueue() << "\n";
	return 0;
}