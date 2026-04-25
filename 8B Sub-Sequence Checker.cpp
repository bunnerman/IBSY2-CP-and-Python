#include <iostream>
using namespace std;

bool isSubSeq(string s1, string s2) // is s1 present in s2?
{
	int m = s1.size();
	int n = s2.size();
	
	int j = 0;
	for (int i = 0; i < n && j < m; i++)
		if(s2[i] == s1[j])
			j++;
	return j == m;
}

int main() 
{
	string s1, s2;
	cin >> s1; 
	cin >> s2;
	cout << boolalpha << isSubSeq(s1, s2);

	return 0;
}
