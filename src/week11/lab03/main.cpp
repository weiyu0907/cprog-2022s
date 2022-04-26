/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

void drawLine(int n)
{
    for(int i=0;i<n;i++)
    {
        cout << ((n%2==0)?"#":"*");
    }
}
 
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
