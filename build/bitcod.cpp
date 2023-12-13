#include<iostream>
int main() 
{
    int a, b, n, c = 1;
    std::cout << "Enter the value: ";
    std::cin >> n;
    
    a = 1;

    do {
        b = 1;
        do {
            std::cout << c << "\t";
            if (c == 1) {
                c = 0;
            } else {
                c = 1;
            }
          b++;
        } while (b <= a);
        std::cout << std::endl;
        a++;
    } while (a <= n);
    return 0;
}
