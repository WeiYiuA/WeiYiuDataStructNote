#include "Stack.h"
#include <iostream>
using std::cout;

int StackTestMain() {
	Stack stack;
	stack.InitStack(10);
	cout << stack.TopStack() << "\n";
	cout << "----------------------" << "\n";
	stack.PushStack(1);
	cout << stack.TopStack() << "\n";
	stack.PushStack(2);
	cout << stack.TopStack() << "\n";
	cout << stack.PopStack() << "\n";
	cout << stack.PopStack()<< "\n";
	cout << stack.TopStack() << "\n";
	return 0;
}