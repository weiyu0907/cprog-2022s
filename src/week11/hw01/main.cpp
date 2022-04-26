#include <iostream>
#include <iomanip>

using namespace std;

void printAll(int n)
for (int i = 1; i <= n; i++)
    {
        cout << i <<setw(4);
    }
void printEven(int n)
   for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i<<setw(4);
        }
    } 
void printOdd(int n)
   for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i <<setw(4);
        }
    }
void printDiv4(int n)
    for (int i = 1; i <= n; i++)
    {
        if (i % 4 == 0)
        {
            cout << i<<setw(4);
        }
    }// add your code here

// -----vv----- 不得修改『以下』的程式 -----vv-----

int main()
{
    int op, n;
    cin >> op;
    cin >> n;

    switch (op)
    {
    case 0:
        printAll(n);
        break;
    case 1:
        printEven(n);
        break;
    case 2:
        printOdd(n);
        break;
    case 3:
        printDiv4(n);
        break;
    }

    return 0;
}


