#include <bits/stdc++.h>
using namespace std;
class que
{
	stack<int> s1;

public:
	void push(int x)
	{
		s1.push(x);
	}
	int pop()
	{

		if (s1.empty())
		{
			cout << "stack is empty" << endl
				 << "THANKYOU" << endl;
			return -1;
		}

		int x = s1.top();
		s1.pop();
		if (s1.empty())
		{
			cout << "stack is empty" << endl;
			return x;
		}
		int item = s1.top();
		s1.push(x);
		return item;
	}
};
int main()
{
	que q;
	q.push(2);
	q.push(3);
	q.push(5);
	q.push(8);
	q.push(9);
	cout << q.pop() << endl;
	q.push(10);
	cout << q.pop() << endl;
	cout << q.pop() << endl;
	cout << q.pop() << endl;
	cout << q.pop() << endl;
	cout << q.pop() << endl;
	cout << q.pop() << endl;
}
