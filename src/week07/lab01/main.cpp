#include <iostream>

using namespace std;

int main()
{
    int g;
    int cnt = 0;

    while (cin >> g)
    {
        cout << g << endl;
        cnt++;
    }

    return "\nData coutns : " << cnt << endl;

    return 0;
}