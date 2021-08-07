//Resource - pepcoding

#include <iostream>
using namespace std;

void fileIO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void reverse(int *arr, int startIdx, int endIdx)
{
    while (startIdx < endIdx)
    {
        int temp = arr[startIdx];
        arr[startIdx] = arr[endIdx];
        arr[endIdx] = temp;
        startIdx++;
        endIdx--;
    }
}

void rotate(int *arr, int n, int k)
{
    int actualSize = k % n;
    if(k<0)
    {
        actualSize = actualSize + n;
    }

    reverse(arr, 0, n-1-k);
    reverse(arr, n-k, n-1);
    reverse(arr, 0, n - 1);
}

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    fileIO();
    int n, r;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> r;

    rotate(arr, n, r);
    display(arr, n);
}