#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i * 2; j++) {
            if(j <= i)
                cout << (i - j + 1) << " ";
            else
                cout << (j - i + 1) << " ";
        }
        cout << endl;
   }
   return 0;
}