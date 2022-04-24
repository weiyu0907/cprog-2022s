#include <iostream>
#include <iomanip>
using namespace std;

// 如果參數 v 是質數回傳整數 1，否則回傳整數 0
int isPrime(int v)
{
    for (int i = 2; i <= v / 2; i++)
        if (v % i == 0)
            return 0;
    return 1;
}

// -----^^----- 不得修改『以上』的程式 -----^^-----

int main()
{
    // add your code here
    
    return 0;
}


