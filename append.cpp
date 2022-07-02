#include <iostream>
using namespace std;

int main() {

    string s1, s2; cin >> s1 >> s2;
    int a, n; cin >> a >> n;
    int finalIndex;

    for(int times = 0; times < n; times++) {
        for(int index = 0; index < a; index++) {
            cout << s1[index];
            finalIndex = index + 1;
        } cout << s2;
        for(finalIndex = finalIndex; finalIndex < (int)s1.length(); finalIndex++) {
            cout << s1[finalIndex];
        } cout << endl;
    }
}