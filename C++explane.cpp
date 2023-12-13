/*
    stdio.h => iostream
    printf() => cout
                << -> insertion operator
                :: -> scope resolution operator

    scanf() => cin 
                >>  -> extension operator
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int a ,b;

    cout << "hello world";  
    cout << "\nenter a and b: ";
    cin >> a >> b;
    // std :: cout <<"\n enter b: ";
    // std :: cin >> b;

    cout <<"value of a+b is " << a+b;
    cout <<"\nvalue of a is:" <<a<<"\nvalue of b is:" <<b;    
}
#include<iostream>
using namespace std;
class Test{
    //by default private
    int a; //data number
    public:
    void hello() //number fauction (method)
    {
        a=100;
        cout <<"value of a is:" <<a<<endl;
        cout<<"hello world";
    }
};
int main(){
    Test t; //object
    t.hello();
}


1. constructor -> class name and function both bare some in c++.
2. automatically called itself creating object in c++.
3. no return types  and no return values in c++.
4. always in public section in c++.
5. typs  defualt and parameerized,copy in c++. 
6. constructor overloads in c ++.
*/
#include <iostream>
using namespace std;

// Forward declaration of class B
class B;

// Class A
class A {
protected:
    int x;

public:
    A() : x(0) {}
    friend void show(const A& a, const B& b); // Friend function declaration
};

// Class B
class B : public A {
private:
    float y;

public:
    B() : y(0.0) {}
    friend void show(const A& a, const B& b); // Friend function declaration
};

// Friend function definition
void show(const A& a, const B& b) {
    cout << "The value of A::x = " << a.x << endl;
    cout << "The value of B::y = " << b.y << endl;
}

int main() {
    A objA;
    B objB;

    show(objA, objB);

    return 0;
}
