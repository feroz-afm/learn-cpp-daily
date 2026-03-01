#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 3; i++) { // Outer loop
        for (int j = 1; j <= 2; j++) { // Inner loop
            cout << "Outer: " << i << ", Inner: " << j << endl;
        }
    }
    return 0;
}