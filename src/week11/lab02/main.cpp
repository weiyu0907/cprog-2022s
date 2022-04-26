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
int n;
int cik = 5;
cin>>n;
for (int i=2;i<=n;i++)
{if(isPrime(i))
{
cout<<setw(10)<<i;
col--;
if(col==0)
{cout<<endl;
col=5;
}}}
return 0;
}
    
    return 0;
}


