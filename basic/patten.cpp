#include <bits/stdc++.h>
using namespace std;

void patten1(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void patten2(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < (num - i - 1); j++)
        {
            cout << ' ' << ' ';
        }
        for (int k = 0; k < (i * 2 + 1); k++)
        {
            cout << '*' << ' ';
        }
        for (int j = 0; j < (num - i - 1); j++)
        {
            cout << ' ' << ' ';
        }
        cout << endl;
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < (i); j++)
        {
            cout << ' ' << ' ';
        }
        for (int k = 0; k < ((num * 2) - (i * 2 + 1)); k++)
        {
            cout << '*' << ' ';
        }
        for (int j = 0; j < (i); j++)
        {
            cout << ' ' << ' ';
        }
        cout << endl;
    }
}
void patten10(int num)
{
    for (int i = 1; i <= (2 * num - 1); i++)
    {
        int star = i;
        if (i > num)
        {
            star = 2 * num - i;
        }
        for (int k = 0; k < star; k++)
        {
            cout << '*' << ' ';
        }
        cout << endl;
    }
}
void patten11(int num)
{
    int start = 1;
    for (int i = 1; i <= (num); i++)
    {
        if (i % 2 == 0)
        {
            start = 0;
        }
        else
        {
            start = 1;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << start << ' ';
            if (start == 0)
            {
                start = 1;
            }
            else
            {
                start = 0;
            }
        }
        cout << endl;
    }
}

void patten12(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << ' ';
        }
        for (int k = 1; k < (2 * num) - (2 * i - 1); k++)
        {
            cout << '*' << ' ';
        }
        for (int m = i; m >= 1; m--)
        {
            cout << m << ' ';
        }
        cout << endl;
    }
}
void patten13(int num)
{
    int data = 1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << data << ' ';
            data++;
        }
        cout << endl;
    }
}
void patten14(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (char ch = 'A'; ch < 'A' + (num - i); ch++)
        {
            cout << ch << ' ';
        }
        cout << endl;
    }
}
void patten15(int num)
{
    for (int i = 0; i < num; i++)
    {
        char chr = 'A' + i;
        for (int ch = 0; ch <= i; ch++)
        {
            cout << chr << ' ';
        }
        cout << endl;
    }
}
void patten16(int num)
{
    for (int i = 1; i <= num; i++)
    {
        char chr = 'A';
        for (int j = 1; j <= num - i; j++)
        {
            cout << ' ' << ' ';
        }
        for (int k = 1; k <= (i * 2 - 1); k++)
        {
            cout << chr << ' ';
            if (k <= ((i * 2 - 1) / 2))
                chr++;
            else
                chr--;
        }
        for (int j = 1; j <= num - i; j++)
        {
            cout << ' ' << ' ';
        }
        cout << endl;
    }
}
void patten18(int num)
{
    for (int i = 1; i <= num; i++)
    {
        char ch = 'E' - i + 1;
        for (int j = 1; j <= i; j++)
        {
            cout << ch << ' ';
            ch++;
        }
        cout << endl;
    }
}
void patten19(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            cout << '*' << ' ';
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << ' ' << ' ';
        }
        for (int j = 0; j < num - i; j++)
        {
            cout << '*' << ' ';
        }
        cout << endl;
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << '*' << ' ';
        }
        for (int j = 0; j < ((num * 2) - (2 * (i + 1))); j++)
        {
            cout << ' ' << ' ';
        }
        for (int j = 0; j <= i; j++)
        {
            cout << '*' << ' ';
        }
        cout << endl;
    }
}
void patten20(int num)
{
    int initialSpace = 2 * num - 2;
    for (int i = 1; i <= 2 * num - 1; i++)
    {
        int star = i;
        if (i > num)
            star = 2 * num - i;

        for (int j = 1; j <= star; j++)
        {
            cout << '*' << ' ';
        }
        for (int j = 1; j <= initialSpace; j++)
        {
            cout << ' ' << ' ';
        }
        for (int j = 1; j <= star; j++)
        {
            cout << '*' << ' ';
        }
        cout << endl;
        if (i < num)
            initialSpace -= 2;
        else
            initialSpace += 2;
    }
}
void patten21(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if (j == 1 || i == 1 || i == num || j == num)
            {
                cout << "*" << ' ';
            }
            else
            {
                cout << " " << ' ';
            }
        }
        cout << endl;
    }
}

int main()
{
    // patten1(4);
    // patten2(5);
    // patten10(5);
    // patten11(5);
    // patten12(4);
    // patten13(5);
    // patten14(5);
    // patten15(5);
    // patten16(5);
    // patten18(5);
    // patten19(5);
    // patten20(5);
    patten21(5);

    return 0;
}