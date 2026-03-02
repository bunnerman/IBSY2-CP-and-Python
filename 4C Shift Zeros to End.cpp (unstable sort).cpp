#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

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
	
	int last = n - 1; // last as in lastMost index where 0 gotta go
	while (ary[last] == 0) // avoid any existing zeroes
		last--;
	
	for (int i = 0; i < n; i++)
	{
		if (last <= i)
			break;
		if (ary[i] == 0)
		{
			int t = ary[last];
			ary[last] = 0;
			ary[i] = t;
			while (ary[last] == 0) // avoid any existing zeroes
				last--;
		}
	}
	
	for (int i = 0; i < n; i++)
		cout << ary[i] << " ";

	return 0;		
}
