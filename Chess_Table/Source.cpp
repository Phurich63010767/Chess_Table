#include<iostream>
using namespace std;

int main()
{
    int i;
    int x = 0;
    int y = 0;
    cout << "Input: ";
    cin >> i;
    while (y < i)
    {
        x = 0;
        if (y % 2 == 1)
        {
            while (x < i)
            {
                if (x % 2 == 0)
                {
                    cout << "_";
                }
                if (x % 2 == 1)
                {
                    cout << "*";
                }
                x++;

            }
            cout << endl;

        }
        x = 0;
        if (y % 2 == 0)
        {
            while (x < i)
            {
                if (x % 2 == 1)
                {
                    cout << "_";
                }
                if (x % 2 == 0)
                {
                    cout << "*";
                }
                x++;

            }
            cout << endl;

        }
        y++;
    }
