#include <bits/stdc++.h>
using namespace std;

void extractionOfDigit()
{
    cout << "Enter the number: ";
    int num;
    int count = 0;
    cin >> num;
    int countOfNumber = (int)log10(num) + 1; // TC = O(log10(num))
    cout << "Total digits are: " << countOfNumber << " (using log10)" << endl;

    while (num > 0)
    {
        int lastDigit = num % 10;
        count++;
        cout << "number is: " << lastDigit << endl;
        num = num / 10;
    }
    cout << "Total digits are: " << count;
}
void reverserNumber()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int reverseNum = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        num /= 10;
        reverseNum = (reverseNum * 10) + lastDigit;
    };
    cout << "Reverse number is: " << reverseNum << endl;
};
bool palindromeNumber()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int copyNum = num;
    int reverseNum = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        num /= 10;
        reverseNum = (reverseNum * 10) + lastDigit;
    };
    if (reverseNum == copyNum)
    {
        cout << "Number is palindrome!!" << endl;
        return true;
    }
    else
    {
        cout << "Number is not palindrome!!" << endl;
        return false;
    }
};
void armstrongNum()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int copyNum = num;
    int sum = 0;
    int numLength = to_string(num).length();
    while (num > 0)
    {
        int lastDigit = num % 10;
        num /= 10;
        sum += pow(lastDigit, numLength);
    };
    if (sum == copyNum)
    {
        cout << "number is armstrong" << endl;
    }
    else
    {
        cout << "number is not armstrong" << endl;
    }
};
void divisorsOfNumAndPrimeNum()
{
    int numb;
    cout << "Enter the number: ";
    cin >> numb;
    set<int> li;

    for (int i = 1; i <= sqrt(numb); i++) // i * i <= numb // O(sqrt(n))
    {
        if (numb % i == 0)
        {
            li.insert(i);
            if ((numb / i) != i)
            {
                li.insert(numb / i);
            }
        }
    }
    cout << "divisors of " << numb << " number are: ";
    for (auto num1 : li)
    {
        cout << num1 << " ";
    };
    cout << endl
         << "total factors: " << li.size() << endl;
    ;
    if (li.size() == 2)
    {
        cout << "number is prime" << endl;
    }
    else
    {
        cout << "number is not prime" << endl;
    }
};
void gcd()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    int GCD = 1;
    for (int i = 1; i <= min(num1, num2); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            GCD = i;
        };
    }
    cout << "GCD is...: " << GCD << endl;
    while (num1 > 0 && num2 > 0)
    {
        if (num1 > num2)
            num1 = num1 % num2;
        else
            num2 = num2 % num1;
    }
    if (num1 == 0)
        cout << "GCD is: " << num2 << endl;
    else
        cout << "GCD is: " << num1 << endl;
};
void rint(int i, int n)
{
    if (i > n)
        return;
    rint(i + 1, n);
    cout << "number: " << i << endl;
};
void recursion() // 4, 3, 2, 1
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    rint(1, num);
};
void forSwap(int i, int arr[], int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - 1 - i]);
    forSwap(i + 1, arr, n);
};
void swapArray()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter element at " << i << " ";
        cin >> arr[i];
    };
    forSwap(0, arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
};
void palindrome(int i, string &str)
{
    if (i >= str.size() / 2)
    {
        cout << "String is palindrome!!" << endl;
        return;
    }
    if (str[i] != str[str.size() - i - 1])
    {
        cout << "String is not palindrome!!" << endl;
        return;
    };
    return palindrome(i + 1, str);
};
void checkPalindrome()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    cout << "String is : " << str << endl;
    palindrome(0, str);
}
int checkFibonacci(int num)
{
    if (num <= 1)
    {
        return num;
    }
    int LastNum = checkFibonacci(num - 1);
    int secondLastNum = checkFibonacci(num - 2);
    return LastNum + secondLastNum;
};
void fibonacci()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "number is : " << num << endl;
    int fibonacciNum = checkFibonacci(num);
    cout << "number is : " << fibonacciNum << endl;
};

bool isPalindrome(int x)
{
    int stringLength = to_string(x).length();
    int palindrome = 0;
    for (int i = 0; i <= stringLength / 2; i++)
    {
        if (to_string(x)[i] == to_string(x)[stringLength - i - 1])
        {
            palindrome = 1;
        }
        else
        {
            break;
        }
    }
    if (palindrome)
    {
        return true;
    }
    else
    {
        return false;
    }
};
int romanToInt(string s)
{
    int total = 0;
    if (s.length() < 0)
    {
        return total;
    }
    unordered_map<char, int> romanVal = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    // for (auto it : romanVal)
    // {
    //     cout << it.first << " : " << it.second << endl;
    // };
    for (int i = 0; i < s.length(); i++)
    {
        int val;
        if (i > 0 && (s[i] == 'V' || s[i] == 'X') && s[i - 1] == 'I')
        {
            val = romanVal[s[i]];
            total = total + val - 2;
        }
        else if (i > 0 && (s[i] == 'C' || s[i] == 'L') && s[i - 1] == 'X')
        {
            val = romanVal[s[i]];
            total = total + val - 20;
        }
        else if (i > 0 && (s[i] == 'D' || s[i] == 'M') && s[i - 1] == 'C')
        {
            val = romanVal[s[i]];
            total = total + val - 200;
        }
        else
        {
            val = romanVal[s[i]];
            total = total + val;
        }
    }
    return total;
};
void longestCommonPrefix(vector<string> &strs)
{
    sort(strs.begin(), strs.end());
    string a = strs[0], b = strs[strs.size() - 1], ans = "";
    for (int i = 0; i < b.length(); i++)
    {
        if (a[i] == b[i])
        {
            ans = ans + b[i];
        }
        else
        {
            // return ans;
            cout << ans;
        }
    }

    // for (auto it : strs)
    // {
    //     cout << it << endl;
    // };
}
void isValid(string s)
{
    if (s.length() < 0 || s.length() % 2 != 0)
    {
        cout << "first false" << endl;
        return;
    };
    int valid = 0;
    map<char, int> dt;
    for (int i = 0; i < s.length(); i++)
    {
        if (dt[s[i]])
        {
            dt[s[i]] = dt[s[i]] + 1;
        }
        else
        {
            dt[s[i]] = 1;
        }
    }
    // if (dt('(') == dt(')'))
}

int main()
{
    // extractionOfDigit();
    // reverserNumber();
    // palindromeNumber();
    // armstrongNum();
    // divisorsOfNumAndPrimeNum();
    // gcd();
    // recursion();
    // swapArray();
    // checkPalindrome();
    fibonacci();
    // int x = 1230;
    // isPalindrome(x);
    // string str = "MCMXCIV";
    // romanToInt(str);
    // vector<string> strs = {"fl0ower", "fl0ow", "fl0ight"};
    // longestCommonPrefix(strs);
    // string str = "()[{{}";
    // isValid(str);

    return 0;
}