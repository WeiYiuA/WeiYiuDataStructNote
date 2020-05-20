#include "LinkStack.h"
#include <iostream>
using std::cout;

int LinkStackTestMain() {
	LinkStack linkStack;
	linkStack.InitLinkStack();
	cout << linkStack.LinkStackEmpty() << "\n";
	cout << linkStack.PopLinkStack() << "\n";
	linkStack.PushLinkStack(1);
	linkStack.PushLinkStack(2);
	linkStack.PushLinkStack(5);
	cout << linkStack.LinkStackEmpty() << "\n";
	cout << linkStack.PopLinkStack() << "\n";
	cout << linkStack.PopLinkStack() << "\n";
	cout << linkStack.PopLinkStack() << "\n";
	cout << linkStack.PopLinkStack() << "\n";
	cout << "------------------------------" << "\n";
	linkStack.PushLinkStack(11);
	linkStack.PushLinkStack(21);
	linkStack.PushLinkStack(51);
	linkStack.DestroyLinkStack();
	cout << linkStack.LinkStackEmpty() << "\n";
	return 0;
}