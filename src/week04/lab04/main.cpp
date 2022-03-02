// lab04 : 用 setw 格式化資料的輸出寬度

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime> 

using namespace std;

int main()
{
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        if (i % 10 == 0)
            cout << endl;
        cout << rand()%10000 << " ";
    }
    cout << endl;
    for (int i = 0; i < 100; i++)
    {
        if (i % 10 == 0)
            cout << endl;
        cout << setw(5) << rand()%10000;
    }
    cout << endl;

    return 0;
}