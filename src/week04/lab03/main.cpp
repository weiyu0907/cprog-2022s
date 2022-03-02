// lab03 : 用 cin 要求使用者從終端機輸入資料

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout<<"Enter an integer (a) : ";
    cin>>a;
    cout<<"Enter an integer (b) : ";
    cin>>b;

    cout<<"a + b = "<<a+b<<endl;
    cout<<"a - b = "<<a-b<<endl;
    cout<<"a * b = "<<a*b<<endl;
    cout<<"a / b = "<<a/b<<endl;
    cout<<"(float)a / b = "<<(float)a/b<<endl;

    return 0;
}