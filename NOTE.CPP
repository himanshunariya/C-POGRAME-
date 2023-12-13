#include <iostream>
using namespace std;
void note() {
    int amt, total, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0;
    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
    cout << "ENTER THE AMOUNT $ :";
    cin >> amt;
    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;

    if (amt >= 500) {
        a = amt / 500;
        amt = amt % 500;
    }
    if (amt >= 100) {
        b = amt / 100;
        amt = amt % 100;
    }
    if (amt >= 50) {
        c = amt / 50;
        amt = amt % 50;
    }
    if (amt >= 20) {
        d = amt / 20;
        amt = amt % 20;
    }
    if (amt >= 10) {
        e = amt / 10;
        amt = amt % 10;
    }
    if (amt >= 5) {
        f = amt / 5;
        amt = amt % 5;
    }
    if (amt >= 2) {
        g = amt / 2;
        amt = amt % 2;
    }
    if (amt >= 1) {
        h = amt / 1;
        amt = amt % 1;
    }

    cout << "THERE ARE NOTES OF 500$ IS " << a << std::endl;
    cout << "THERE ARE NOTES OF 100$ IS " << b << std::endl;
    cout << "THERE ARE NOTES OF 050$ IS " << c << std::endl;
    cout << "THERE ARE NOTES OF 020$ IS " << d << std::endl;
    cout << "THERE ARE NOTES OF 010$ IS " << e << std::endl;
    cout << "THERE ARE NOTES OF 005$ IS " << f << std::endl;
    cout << "THERE ARE NOTES OF 002$ IS " << g << std::endl;
    cout << "THERE ARE NOTES OF 001$ IS " << h << std::endl;
}

int main() {
    note();
    return 0;
}
