#include <iostream>

using namespace std;

int main()
{
    int g;
    int sum = 0;
    int cnt = 0;

    while (cin >> g)
    {
        sum += g;
        cnt++;
    }

    cout<<"sum = "<<sum<<endl;
    cout<<"avg = "<<(float)sum/cnt<<endl;
    
    return 0;
}