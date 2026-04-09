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

vector <int> sortVecIntersection(vector <int> va, vector <int> vb)
{
	int sa = va.size(), sb = vb.size();
	int i = 0, j = 0;
	vector <int> res;

	while (i < sa && j < sb)
	{
		if (i > 0 && va[i - 1] == va[i])
		{
			i++;
			continue;
		}
		if (va[i] < vb[j])
			i++;
		else if (va[i] > vb[j])
			j++;
		else
		{
			res.push_back(va[i]);
			i++; j++;		
		}
	}

	return res;
}

int main()
{
	vector <int> va = {1, 3, 3, 5, 8, 11}, vb = {3, 5, 7, 8, 9, 10, 11};
	
	auto res = sortVecIntersection(va, vb);

	for (int &i : res)
		cout << i << " ";

	return 0;
}
