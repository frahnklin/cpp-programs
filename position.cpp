#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    int a, b, n; cin >> a >> b >> n;

    for(int times = 0; times < n; times++) {
        for(int counter = a; counter < a + b; counter++) {
            cout << s[counter];
        }
        cout << endl;
    }
}