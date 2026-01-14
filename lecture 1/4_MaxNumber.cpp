#include <iostream>
using namespace std;
int main()
{
    int no_1;
    int no_2;
    cin >> no_1 >> no_2;
    int no = no_1 - no_2;

    if (no_1 != no_2)
    {
        if (no < 0)
        {
            cout << no_2 << " is greater than " << no_1 << endl;
        }
        else
        {
            cout << no_1 << " is greater than " << no_2 << endl;
        }
    }
    else
    {
        cout << "Both are equal";
    }
    return 0;
}