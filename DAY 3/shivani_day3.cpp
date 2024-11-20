#include <iostream>
using namespace std;
int main() 
{
    int a, b;
    cout << "Enter the starting range of a: ";
    cin >> a;
    cout << "Enter the ending range of b: ";
    cin >> b;
    if (a >= b) 
    {
        cout << "Invalid input: a must be less than b." << endl;
        return 1;
    }
    for (int num = a; num <= b; num++) 
    {
        if (num % 5 == 0 && num % 7 == 0) 
        {
            cout << "FooBar" << endl;
        } 
        else if (num % 5 == 0) 
        {
            cout << "Foo" << endl;
        } 
        else if (num % 7 == 0) 
        {
            cout << "Bar" << endl;
        } 
        else 
        {
            cout << "Baz" << endl;
        }
    }
    return 0;
}
