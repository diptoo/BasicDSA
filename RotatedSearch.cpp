//Resource - Coding Minutes Udemy

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

void fileIO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int rotateSearch(int *a, int key, int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (key == a[mid])
            return mid;
        else if (a[start] <= a[mid])
        {
            //left line
            if (a[start] <= key && key <= a[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            //right line
            if (a[mid] <= key && key <= a[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    fileIO();

    int n;
    int a[] = {4, 5, 6, 7, 0, 1, 2, 3};
    int key;
    cin >> key;
    cout << rotateSearch(a, key, 8) << endl;
}