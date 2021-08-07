//Resource - Coding Minutes Udemy

#include <iostream>
#include <cstring>
using namespace std;

void fileIO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main()
{
    fileIO();
    //Lec-1
    // char a[] = {'a', 'b', 'c', '\0'}; // always initialize with null character
    // char b[] = "abcdef";
    // cout << a << endl;
    // cout << b << endl;

    // cout << strlen(b) << endl; //no of visible characters
    // cout << sizeof(b) << endl; //+1 because of null characters
    // char c[100];
    // cin>>c; // no need of for loop. doesn't work with white spaces
    // cout<<c<<endl;

    //Lec-2
    // char sentence[100];
    // char temp = cin.get(); //read from input buffer once you hit the enter
    
    // while (temp !='\n')
    // {
    //     cout<<temp<<" ";
    //     temp = cin.get();
    // }

    //lec-3
    //ch>='0' && ch<='9'
    //lec-4
    // char sentence[1000];
    // cin.getline(sentence, 1000);
    // cout<<sentence<<endl;

    char paragraph[1000];
    cin.getline(paragraph, 1000, '.');
    cout<<paragraph<<endl;
}