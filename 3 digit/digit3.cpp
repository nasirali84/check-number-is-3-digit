#include <iostream>
using namespace std;
// Take positive integer input and tell if it is a three digit number or not.
int main()
{
    int num;
    cout << "Entre a number";
    cin >> num;

    if (num >= 100 && num <= 999)
    {
        cout << "The number is three digit: " << num;
    }
    else
    {
        cout << "Number is not three digit: " << num;
    }
}