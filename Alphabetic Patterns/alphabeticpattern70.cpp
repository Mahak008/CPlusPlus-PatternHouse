#include <iostream>

using namespace std;

int main()
{
    int c=65;
    bool flag=true;
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=5;j++)
        {
            if (flag==true)
            {
                cout<<"* ";
            }
            else
            {
                cout<<(char)(c++)<<" ";
            }
            flag=!flag;
        }
        cout<<endl;
    }

    return 0;
}