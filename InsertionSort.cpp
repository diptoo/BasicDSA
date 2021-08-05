//Resource - Coding Minutes Udemy

#include <iostream>
using namespace std;

void fileIO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int currentItem = arr[i];
        int prevIndex = i - 1;

        while (prevIndex >= 0 && arr[prevIndex] > currentItem)
        {
            arr[prevIndex + 1] = arr[prevIndex];
            prevIndex--;
        }
        arr[prevIndex + 1] = currentItem;
    }
}

int main()
{
    fileIO();
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    for (auto item : arr)
    {
        cout << item << ',';
    }
}