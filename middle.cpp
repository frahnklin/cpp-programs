#include <iostream>
using namespace std;

int main() {
    string word; cin >> word;
    if(word.length() % 2 == 0) {
        cout << "No middle character!";
    } else if (word.length() % 2 == 1) {
        cout << word[((int)word.length() / 2)];
    }
}