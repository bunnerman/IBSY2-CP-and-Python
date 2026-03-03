#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter number of elements: ";
	cin >> n;
	cout << "Enter " << n << " elements: ";
	int ary[n];
	for (int i = 0; i < n; i++)
		cin >> ary[i];
	
	int max = ary[0] > ary[1] ? ary[0] : ary[1];
	int max2 = ary[0] < ary[1] ? ary[0] : ary[1];
	for (int i = 2; i < n; i++)
	{
		if (ary[i] > max)
		{
			max2 = max;
			max = ary[i];
		}
		else if (ary[i] > max2)
			max2 = ary[i];
	}

	cout << "Max: " << max << "\n";
	cout << "2nd max: " << max2;

	return 0;
}
