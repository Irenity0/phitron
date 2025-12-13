#include <iostream>
using namespace std;

int main() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int messi = a*2 + b;
    int ronaldo = x*2 + y;

    if (messi > ronaldo) {
        cout << "Messi";
    } 
    else if (ronaldo > messi) {
        cout << "Ronaldo";
    } 
    else {
        cout << "Equal";
    }

    return 0;
}
