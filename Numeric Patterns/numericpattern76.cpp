
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int c = 2;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= (5 - i); j++)
        {
            cout << "    ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << setw(4) << c;
            c += 2;
        }
        cout << endl;
    }

    return 0;
}