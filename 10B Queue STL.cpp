#include <iostream>
#include <queue>
using namespace std;

void displayQueue(queue <int> qqe)
{
	while (!qqe.empty())
	{
		cout << qqe.front() << " ";
		qqe.pop();
	}
	return;
}

int main()
{
	queue <int> qqe;

	qqe.push(1);
	qqe.push(2);
	qqe.push(3);
	qqe.pop();
	displayQueue(qqe);
}
