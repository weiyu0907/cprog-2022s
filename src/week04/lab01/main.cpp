// lab01 : 用 sizeof(...) 取得各種資料型態實際使用空間 

#include <iostream>

using namespace std;

int main()
{
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(char) = " << sizeof(char) << endl;
    cout << "sizeof(wchar_t) = " << sizeof(wchar_t) << endl;
    cout << "sizeof(float) = " << sizeof(float) << endl;
    cout << "sizeof(double) = " << sizeof(double) << endl;
    cout << "sizeof(bool) = " << sizeof(bool) << endl;
    cout << "sizeof(short) = " << sizeof(short) << endl;
    cout << "sizeof(long) = " << sizeof(long) << endl;
    cout << "sizeof(long long) = " << sizeof(long long) << endl;

    return 0;
}