#include <iostream>
#include <list>
using namespace std;

class stk
{
	list <int> ll;
	int top = 0; // free top index, not occupied
	public:
	void push(int n)
	{
		if (top >= 5)
		{
			cout << "OFlow\n";
			return;
		}
		ll.push_back(n);
		top++;
		cout << "Pushed " << n << "\n";
	}
	void pop()
	{
		if (top == 0)
		{
			cout << "UFlow\n";
			return;
		}
		cout << "Popped " << ll.back() << "\n";
		top--;
		ll.pop_back();
	}
	void display()
	{
		for (int &i : ll)	
			cout << i << " ";
		cout << "\n";
	}
};

int main()
{
	stk arr;
	arr.pop();
	arr.push(1);
	arr.push(2);
	arr.push(3);
	arr.pop();
	arr.push(4);
	arr.push(5);
	arr.push(6);
	arr.pop();
	arr.display();
}
