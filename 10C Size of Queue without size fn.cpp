#include <iostream>
#include <queue>
using namespace std;

int checkQueueSize(queue <int> qqe)
{
	int size = 0;
	while (!qqe.empty())
	{
		qqe.pop();
		size++;
	}

	return size;
}

void displayQueue(queue <int> qqe) // copy passed
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
	qqe.push(4);
	qqe.push(5);
	displayQueue(qqe);
	cout << "\n" << checkQueueSize(qqe);
}
