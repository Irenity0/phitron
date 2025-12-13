#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int w, p, k;
        cin >> w >> p >> k;

        int wood = min(w, k);   
        int plastic = k - wood;     //remaining
        int stylishness = 2 * wood + 1 * plastic;

        cout << stylishness << endl;
    }
    return 0;
}
