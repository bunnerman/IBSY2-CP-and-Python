#include <iostream> 
using namespace std; 

int recBinarySearch(int* ary, int low, int high, int key) 
{ 
	if (low > high) 
		return -1; 
	int mid = (high + low) / 2; 
	if (ary[mid] > key) 
		return recBinarySearch(ary, low, mid - 1, key); 
	else if (ary[mid] < key) 
		return recBinarySearch(ary, mid + 1, high, key); 
	else 
		return mid; 
} 

int main() 
{ 
	int n; 
	cout << "Enter no. of elements: ";
	cin >> n; 
	int ary[n]; 
	cout << "Enter " << n << " elements: "; 
	for (int& i : ary) 
		cin >> i; 
	int key;
	cout << "Enter key: "; 
	cin >> key; 
	
	int result = recBinarySearch(ary, 0, n - 1, key); 
	if (result == -1) 
		cout << "Not Present"; 
	else 
		cout << "Index: " << result; 
	return 0; 
}
