#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 2; i++)
    {
        int minVal = i;
        for (int j = i + 1; j < arr.size() - 1; j++)
        {
            if (arr[minVal] > arr[j])
            {
                minVal = j;
            }
        }
        int temp = arr[minVal];
        arr[minVal] = arr[i];
        arr[i] = temp;
    }
}
void selectionSorting() // o(n^2)
{
    int arr[] = {1, 0, 12, 12, 54, 012, 456};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << "element at " << i << " is " << arr[i] << endl;
    }
    for (int i = 0; i <= (sizeof(arr) / sizeof(arr[0])) - 2; i++)
    {
        int mini = i;
        for (int j = i + 1; j <= (sizeof(arr) / sizeof(arr[0])) - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    };
    cout << "after sorting" << endl;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << "element at " << i << " is " << arr[i] << endl;
    }
}
void bubbleSort() // o(n^2)
{
    int arr[] = {1, 2, 3};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << "element at " << i << " is " << arr[i] << endl;
    }
    int didSwap = 0;
    for (int i = sizeof(arr) / sizeof(arr[0]); i >= 1; i--)
    {
        for (int j = 0; j < i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            cout << "already in asc order: " << endl;
            break;
        }
    }
    cout << "after bubble sort" << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << "element at " << i << " is " << arr[i] << endl;
    }
}
void insertionSort()
{
    int arr[] = {12, 21, 10, 8, 53, 2};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << "element at " << i << " is " << arr[i] << endl;
    }
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    cout << "after bubble sort" << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << "element at " << i << " is " << arr[i] << endl;
    }
}
vector<int> twoSum(vector<int> &nums, int target)
{
    for (int i = 0; i <= nums.size() - 1; i++)
    {
        for (int j = 1; j < nums.size(); j++)
        {
            if (i != j)
            {
                if (nums[i] + nums[j] == target)
                {
                    cout << i << " " << j << endl;
                    return {i, j};
                };
            }
        };
    };
    return {};
};
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {

        if (arr[left] <= arr[right])
        {
            temp.emplace_back(arr[left]);
            left = left + 1;
        }
        else
        {
            temp.emplace_back(arr[right]);
            right = right + 1;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left = left + 1;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right = right + 1;
    }
    for (int i = 0; i < temp.size(); i++)
    {
        cout << "aaaaa " << temp[i] << " ";
    }
    cout << "low " << low << high << " " << endl;

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "aa " << arr[i] << " ";
    }
    cout << endl;
};
void mergeSorting(vector<int> &arr, int low, int high) // {2, 4, 1, 5, 3}
{
    if (high <= low)
    {
        return;
    }
    int mid = (low + high) / 2;
    mergeSorting(arr, low, mid);
    mergeSorting(arr, mid + 1, high);
    merge(arr, low, mid, high);
};

int main()
{
    // selectionSorting();
    // bubbleSort();
    // insertionSort();
    // vector<int> nums = {2, 5, 5, 11};
    // int target = 10;
    // twoSum(nums, target);
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int size = arr.size() - 1;
    mergeSorting(arr, 0, size);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}