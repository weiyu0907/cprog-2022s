#include <iostream>
#include <iomanip>

using namespace std;

// add your code here

// -----vv----- 不得修改『以下』的程式 -----vv-----

int main()
{
    int n;

    while (cin >> n)
    {
        cout << setw(3) << n << " : ";
        drawLine(n);
        cout << endl;
    }

    return 0;
}

