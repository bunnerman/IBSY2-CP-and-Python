#include <iostream>
using namespace std;

class qqe
{
    int ary[5];
    int top = 0; // rear
    int btm = 0; // front

public:
    void enq(int n)
    {
        if (top >= 5)
        {
            cout << "OFlow\n";
            return;
        }
        ary[top++] = n;
        cout << "Pushed " << n << "\n";
    }

    void deq()
    {
        if (btm == top)
        {
            cout << "UFlow\n";
            return;
        }
        cout << "Popped " << ary[btm] << "\n";
        btm++;
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
	arr.enq(1);
	arr.enq(2);
	arr.enq(3);
	arr.deq();
	arr.display();
}
