#include <iostream>
using namespace std;

int main()
{
     int height = 5;
    int width = (2 * height) - 1;
   int i, j, half = (height / 2);
    for (i = 0; i < height; i++) {
        cout <<"B";
        for (j = 0; j < width; j++) {
            if ((i == 0 || i == height - 1 || i == half)
                && j < (width - 2))
                cout <<"B";
            else if (j == (width - 2)
                    && !(i == 0 || i == height - 1
                        || i == half))
                cout <<"B";
            else
                cout <<" ";
        }
        cout <<"\n";
    }

    return 0;
}