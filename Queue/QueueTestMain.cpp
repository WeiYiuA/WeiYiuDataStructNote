#include "Queue.h"
#include <iostream>
using std::cout;

int QueueTestMain() {
	Queue queue;
	queue.InitQueue(10);
	cout << queue.LengthQueue() << "\n";
	queue.EnQueue(100);
	queue.EnQueue(200);
	cout << queue.DeQueue() << "\n";
	queue.EnQueue(300);
	queue.EnQueue(400);
	cout << "--------------------------------" << "\n";
	cout << queue.DeQueue() << "\n";
	cout << queue.LengthQueue() << "\n";
	cout << queue.DeQueue() << "\n";
	cout << queue.DeQueue() << "\n";
	cout << queue.DeQueue() << "\n";
	queue.EnQueue(10);
	cout << queue.LengthQueue() << "\n";
	queue.EnQueue(100);
	cout << queue.LengthQueue() << "\n";
	cout << queue.DeQueue() << "\n";

	Queue q;
	q.InitQueue(10);
	for (int i = 0; i < 10; i++) q.EnQueue(i+1);
	q.LengthQueue();
	cout << q.Front() << "\n";
	cout << q.DeQueue() << "\n";
	cout << q.Front() << "\n";
	q.DeQueue();
	cout << q.Front();
	cout << q.Rear();
	return 0;
}