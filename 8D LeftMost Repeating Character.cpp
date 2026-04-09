#include <iostream>
using namespace std;

int charMap = 256;
int leftMost(string &str)
{
	int fIndex[charMap] = {0};
	fill(fIndex, fIndex+charMap, -1);
	int res = INT_MAX;
	for(int i = 0; i < str.size(); i++)
	{
		int fi = fIndex[str[i]];
		if(fi == -1)
			fIndex[str[i]]=i;
		else
			res = min(res, fi);
	}
	return (res == INT_MAX) ? -1 : res;
}

int main()
{
	string str = "exampleString";
	cout << str[leftMost(str)];
}
