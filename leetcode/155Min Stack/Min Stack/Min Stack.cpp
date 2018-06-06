#include"Min Stack.h"

//*************ÍøÂç½â·¨£¨Í¬leetcode¹ÙÍø£©**********************
void MinStack::push(int x)
{
	content.push(x);
	if (mins.empty()||x <= mins.top())
		mins.push(x);
}

void MinStack::pop()
{
	int top = content.top();
	content.pop();
	if (top == mins.top())
		mins.pop();
}

int MinStack::top()
{
	return content.top();
}

int MinStack::getMin()
{
	return mins.top();
}
//--------------------------------------

int main()
{
	MinStack minStack;
	minStack.push(-2);
	minStack.push(0);
	minStack.push(-3);
	cout<<minStack.getMin()<<endl;
	minStack.pop();
	cout<<minStack.top()<<endl;
	cout<<minStack.getMin()<<endl;
	system("pause");
	return 0;
}