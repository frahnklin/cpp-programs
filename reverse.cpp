#include <iostream>
using namespace std;

int main() {
    string word; cin >> word;
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        for(int index = 0; index < word.length(); index++) {
            cout << word[word.length() - index - 1];
        }
        cout << endl;
    }
}