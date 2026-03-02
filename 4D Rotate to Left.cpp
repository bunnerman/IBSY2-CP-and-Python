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

	int zeroth = ary[0];

	for (int i = 0; i < n - 1; i++)
		ary[i] = ary[i + 1]; 	
	ary[n-1] = zeroth;

	for (int i = 0; i < n; i++)
		cout << ary[i] << " ";

	return 0;		
}
