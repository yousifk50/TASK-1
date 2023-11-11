#include <iostream>
#include <string>
using namespace std;

bool pal(const string& s) {
    int n = s.length();

    for (int i = 0; i <= n / 2; i++) {
        if (s[i] != s[n - 1 - i])
            return false;
    }

    return true;
}

int countPal(const string names[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (pal(names[i]))
            count++;
    }

    return count;
}

int main() {
    string names[] = {"ana", "gamed", "non", "lol", "mohsen"};

    cout << "The number of palindrome names in the list is: " << countPal(names, 5) << endl;

    return 0;
}
