#include <iostream>
using namespace std;
int main()
{
    int no_1;
    int no_2;
    int no_3;
    cin >> no_1 >> no_2 >> no_3;

    if (no_1 != no_2 && no_3 != no_1 && no_3 != no_1)
    {
        if (no_1 < no_2 && no_3 < no_2)
        {
            cout << no_2 << " is greater " << endl;
        }
        if (no_2 < no_3 && no_1 < no_3)
        {
            cout << no_3 << " is greater " << endl;
        }
        else
        {
            cout << no_1 << "is greater " << endl;
        }
    }
    else
    {
        cout << "All are equal";
    }
    return 0;
}