#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int curr = 0;

    for (int i = 0; i < N; i++) {
        string w;
        cin >> w;

        if (curr + w.length() <= K) {
            if (curr > 0) cout << " ";
            cout << w;
            curr += w.length();
        } else {
            cout << "\n";
            cout << w;
            curr = w.length();
        }
    }
}