#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <cmath>
#include <ctime>
#include <vector>
#include <chrono>
#include <algorithm>

using namespace std; 

int kthSmallest(int arr[], int n, int k)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
		int freq[max + 1] = {0};

		for (int i = 0; i < n; i++)
			freq[arr[i]]++;

		int count = 0; 
		
		for (int i = 0; i <= max; i++)
			if (freq[i] != 0)
			{
				count += freq[i];
				if (count >= k)
					return i;
			}
	}
	return -1;
}

int main()
{
	int arr[] = {12, 3, 5, 7, 10};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 2;
	cout << kthSmallest(arr, n, k);

	return 0;
}
