#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    if (x > y)
        cout << "Result: " << x << " is greater.";
    else if (y > x)
        cout << "Result: " << y << " is greater.";
    else
        cout << "Both numbers are equal.";
    return 0;
}
