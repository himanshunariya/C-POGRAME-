#include <iostream>
using namespace std;
int main() {
    int m, p, c, t, s;

    cout << "Enter marks in Math: ";
    cin >> m;

    cout << "Enter marks in Physics: ";
    cin >> p;

    cout << "Enter marks in Chemistry: ";
    cin >> c;

    s = m + p;
    t = s + c;

    if (s >= 140 && t >= 188) {
        cout << "The candidate is eligible for admission." << std::endl;
    } else {
        cout << "The candidate is not eligible for admission." << std::endl;
    }

    return 0;
}
