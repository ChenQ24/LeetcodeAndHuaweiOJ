#include"Implement Stack using Queues.h"

//**************leetcode official***************
/** Push element x onto stack. */
void MyStack::push(int x)
{
	q.push(x);
	for (size_t i = 0; i < q.size() - 1; i++)
	{
		q.push(q.front());
		q.pop();
	}
}

/** Removes the element on top of the stack and returns that element. */
int MyStack::pop()
{
	int n = q.front();
	q.pop();
	return n;
}

/** Get the top element. */
int MyStack::top()
{
	return q.front();
}

/** Returns whether the stack is empty. */
bool MyStack::empty()
{
	return q.empty();
}
//---------------------------

int main()
{
	MyStack sta;
	cout << sta.empty() << endl;
	sta.push(1);
	sta.push(2);
	sta.push(3);
	sta.push(4);
	cout << sta.top() << endl;
	sta.pop();
	cout << sta.empty() << '\t' << sta.top()<<endl;
	system("pause");
	return 0;


}