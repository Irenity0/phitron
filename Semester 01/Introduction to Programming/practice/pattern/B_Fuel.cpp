#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;

    int distance = x * y;

    if (distance >= 100)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}