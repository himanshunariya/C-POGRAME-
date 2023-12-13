#include <iostream>
using namespace std;
int main() {
    char a, b;

    for (a = 65; a <= 90; a++) {
        b = a + 32;
        {
            cout << a << "-" << b << std::endl;
        }
    }

    return 0;
}
