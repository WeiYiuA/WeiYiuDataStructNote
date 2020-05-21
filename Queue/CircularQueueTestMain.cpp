#include "CircularQueue.h"
#include <iostream>
using std::cout;

int CircularQueueTestMain() {
	CircularQueue cirQueue;
	cirQueue.InitCircularQueue(10);
	for (int i = 1; i < 12; i++) cirQueue.EnCircularQueue(i);
	cout << cirQueue.LengthCircularQueue() << "\n";
	cout << cirQueue.DeCircularQueue() << "\n";
	cout << cirQueue.LengthCircularQueue() << "\n";
	cout << cirQueue.DeCircularQueue() << "\n";
	cout << cirQueue.Front() << "\n";
	cout << cirQueue.Rear() << "\n";

	CircularQueue cQueue;
	cQueue.InitCircularQueue(2);
	cQueue.EnCircularQueue(1);
	cout << cQueue.FullCircularQueue() << "\n";
	cout << cQueue.DeCircularQueue();
	cout << cQueue.FullCircularQueue() << "\n";
	cout << cQueue.EmptyCircularQueue() << "\n";
	return 0;
}