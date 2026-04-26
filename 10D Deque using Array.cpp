#include <iostream>
using namespace std;

class qqe
{
    int ary[5];
    int top = 0; // back
    int btm = 0; // front

public:
    void enqBck(int n)
    {
        if (top >= 5)
        {
            cout << "OFlow\n";
            return;
        }
        ary[top++] = n;
    }

    void deqFrnt()
    {
        if (btm == top)
        {
            cout << "UFlow\n";
            return;
        }
        cout << "DQ " << ary[btm++] << "\n";
    }

    void enqFrnt(int n)
    {
        if (top >= 5)
        {
            cout << "OFlow\n";
            return;
        }

        for (int i = top; i > btm; i--)
            ary[i] = ary[i - 1];  // shift right

        ary[btm] = n;
        top++;
    }

    void deqBck()
    {
        if (btm == top)
        {
            cout << "UFlow\n";
            return;
        }
        cout << "DQ " << ary[--top] << "\n";
    }

    void display()
    {
        for (int i = btm; i < top; i++)
            cout << ary[i] << " ";
        cout << "\n";
    }
};

int main()
{
	qqe arr;
	arr.enqBck(1);
	arr.enqBck(2);
	arr.enqFrnt(3);
	arr.deqBck();
	arr.enqBck(4);
	arr.deqFrnt();
	arr.display();
}
