#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cout << "Enter the number: ";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // // precompute
    // int hash[12] = {0};
    // for (int i = 0; i < n; i++)
    // {
    //     hash[arr[i]] += 1;
    // }
    // cout << "aa" << sizeof(hash) << "aa" << sizeof(hash[0]);
    // for (int i = 0; i < sizeof(hash) / sizeof(hash[0]); i++)
    // {
    //     cout << "this si  hash: " << hash[i] << endl;
    // }
    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int number;
    //     cin >> number;
    //     cout << hash[number] << endl;
    // }

    // string str;
    // cout << "Enter the string: ";
    // cin >> str;

    // int hash[256] = {0};
    // for (int i = 0; i < str.size(); i++)
    // {
    //     hash[str[i]] += 1;
    // };
    // for (int i = 0; i < sizeof(hash) / sizeof(hash[0]); i++)
    // {
    //     cout << "character is: " << hash[i] << endl;
    // };
    // int q;
    // cout << "enter total query: ";
    // cin >> q;
    // while (q--)
    // {
    //     char c;
    //     cout << "Enter the character";
    //     cin >> c;
    //     cout << "total is : " << hash[c] << endl;
    // }

    int arr[] = {
        1,
        2,
        4,
        5,
        2,
        4,
        2,
        2,
        2,
        5,
    };
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int, int> uoMap;
    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << "element " << i << ": " << arr[i] << endl;
        uoMap[arr[i]] += 1;
    }
    for (auto i : uoMap)
    {
        cout << i.first << " => " << i.second << endl;

        int count = i.second;
        int element = i.first;

        if (count > maxFreq) // 1 > 0 true maxFreq = 1
        {
            maxEle = element;
            maxFreq = count;
        }
        if (count < minFreq) // 1 < n true minFreq = 1
        {
            minEle = element;
            minFreq = count;
        }
    }

    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";

    return 0;
}