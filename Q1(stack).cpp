#include<iostream>
using namespace std;

template<class cx>
class stack {
	cx *stack1;
	int top;
	int size;
public:
	stack(int size1)
	{
		stack1 = nullptr;
		top = -1;
		size = size1;
	}
	void make()
	{
		stack1 = new cx[size];
	}
	void push(cx val)
	{
		top++;
		stack1[top] = val;
	}
	cx pop()
	{
		cx temp = stack1[top];
		top--;
		return temp;
	}
};
int main()
{  
	stack<int>s1(5);
	s1.make();
	s1.push(1);
	cout << s1.pop();
}
