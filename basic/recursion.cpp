#include <bits/stdc++.h>
using namespace std;

void inputNumber(int num, int sum = 0)
{
    if (num < 1)
    {
        cout << "sum is: " << sum << endl;
        cout << "sum " << sum << " num " << num << endl;
        return;
    }
    inputNumber(num - 1, sum + num);
    cout << "sum " << sum << " num " << num << endl;
};
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
};

void recSwap(int index, int array[], int size)
{
    if (index > size / 2)
    {
        return;
    }
    swap(array[index], array[size - index - 1]);
    recSwap(index + 1, array, size);
};

void isPalindrome(int index, string &name, int size)
{
    if (index > size / 2)
    {
        cout << "Is Palindrome";
        return;
    }
    if (name[index] != name[size - index - 1])
    {
        cout << "not Palindrome";
        return;
    }
    isPalindrome(index + 1, name, size);
};

int main()
{
    // int num, sum;
    // cout << "start: input number as you hell wish:" << endl;
    // cin >> num;
    // cout << "Input number in :" << num << endl;
    // inputNumber(num, sum);
    // cout << fact(num);

    // int arraySize;
    // cout << "enter array size : ";
    // cin >> arraySize;
    // int arr[arraySize];
    // for (int i = 0; i < arraySize; i++)
    // {
    //     cout << "enter array " << i << " element ";
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < arraySize; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    // recSwap(0, arr, arraySize);
    // for (int i = 0; i < arraySize; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    string name;
    getline(cin, name);
    cout << size(name);
    isPalindrome(0, name, size(name));
    return 0;
}