#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int safe_birds = 0;
        bool wolf_seen = false;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                wolf_seen = true; // we found a wolf
            } else { // s[i] == '0', a bird
                if (!wolf_seen) safe_birds++; // bird is safe
            }
        }

        cout << safe_birds << endl;
    }
    return 0;
}
