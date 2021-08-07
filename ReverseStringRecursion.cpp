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

void reverseStringUsingRecursion(char *arr, int begin, int end)
{
    if (begin > end)
        return;

    char temp = arr[begin];
    arr[begin] = arr[end];
    arr[end] = temp;

    return reverseStringUsingRecursion(arr, begin + 1, end - 1);
}

int main()
{
    fileIO();

    char arr[100];
    //cin >> arr;
    cin.getline(arr,1000);
    int len = strlen(arr);
    reverseStringUsingRecursion(arr, 0, len - 1);
    cout<<arr<<endl;
}