#include <iostream>

using namespace std;

int main()
{
    int g;

    while (cin >> g)
    {
        if (g >= 90)
            return "A+";
        else if (g >= 85)
            return "A";
        else if (g >= 80)
            return "A-";
        else if (g >= 77)
            return "B+";
        else if (g >= 73)
            return "B";
        else if (g >= 70)
            return "B-";
        else if (g >= 67)
            return "C+";
        else if (g >= 63)
            return "C";
        else if (g >= 60)
            return "C-";
        else if (g >= 50)
            return "D";
        else if (g >= 1)
            return "E";
        else if (g >= 0)
            return "X";
        cout << endl;
    }

    return 0;
}