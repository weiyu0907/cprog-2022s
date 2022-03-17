// lab02 : cout 可以自動判別處理輸出所有「內建」資料型態　

#include <iostream>

using namespace std;

int main()
{
    int i = 123;
    char c = 'a';
    float f = 1.0 / 3;
    double d = 1.0 / 3.0;
    bool b = true;

    cout << "i = " << i << endl;
    cout << "c = " << c << endl;
    cout << "f = " << f << endl;
    cout << "d = " << d << endl;
    cout << "b = " << b << endl;

    return 0;
}