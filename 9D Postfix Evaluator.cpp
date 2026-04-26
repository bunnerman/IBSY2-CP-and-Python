#include <iostream>
#include <string>
#include <cctype>
#include <stack>
using namespace std;

float evPostfix(string str)
{
	stack <float> stk;	
	for (char ch : str)
	{
		if (ch == 32)
			continue;
		if (isdigit(ch))
			stk.push(ch - '0'); // ASCII math to convert into numbers via -48
        else
        {
            float b = stk.top(); 
			stk.pop();
            float a = stk.top(); 
			stk.pop();

            switch (ch)
            {
                case '+': stk.push(a + b); break;
                case '-': stk.push(a - b); break;
                case '*': stk.push(a * b); break;
                case '/': stk.push(a / b); break;
            }
        }
	}
	return stk.top();
}

int main()
{
	string x;
	cout << "Enter string: ";
	getline(cin, x);
	cout << evPostfix(x);
}
