#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the Number : ";
    cin >> a;
    if (a<0 || a>100000)
    cout<<" Invalid Input ";
    if (a % 2 == 0)
        cout << "Even";
    else
        cout << "odd";

}
