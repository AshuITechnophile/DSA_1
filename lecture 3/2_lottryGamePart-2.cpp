#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >= 300 && n <= 460)
    {
        cout << "You won a MacBook";
        if (n >= 300 && n <= 380)
        {
            cout << "Model: M1 Mac";
        }
        else if (n >= 381 && n <= 460)
        {
            cout << "Model: M2 Mac";
        }
    }
    else if (n >= 200 && n <= 280)
    {
        cout<<"You won a pack of kurkure!";
        if (n >= 200 && n < 240)
        {
            cout << "Flavor Chilli kurkure";
        }
        else if (n >= 241 && n < 280)
        {
            cout << "Flavor Onion kurkure";
        }
    }
    else if (n >= 1100 && n >= 1500)
    {
        cout << "You won a Cycle!";
        if (n >= 1100 && n < 1300)
        {
            cout << "Flavor Onion kurkure";
        }
    }
    else if (n > 50 && n <= 80)
    {
        cout << "You won a Bike";
    }
    else
    {
        cout << "Better luck next time";
    }
    return 0;
}