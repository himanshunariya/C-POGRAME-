#include <iostream>
using namespace std;
class flight 
{
    private:
    int flightnumber;
    char destination[100];
    float distance;
    float fuel;

    void calfuel() 
    {
        if (distance <= 1000) 
        {
            fuel = 500;
        } 
        else if (distance > 1000 && distance <= 2000) 
        {
            fuel = 1100;
        } 
        else 
        {
            fuel = 2200;
        }
    }

    public:
    void feedinfo() {
        cout << "Enter Flight Number: ";
        cin >> flightnumber;
        cout << "Enter Destination: ";
        cin >> destination;
        cout << "Enter Distance: ";
        cin >> distance;

        calfuel();
    }

    void showinfo() {
        cout << "\nFlight Number: " << flightnumber <<endl;
        cout << "Destination: " << destination <<endl;
        cout << "Distance: " << distance << " km" <<endl;
        cout << "Fuel Required: " << fuel << " liters" <<endl;
    }
};

int main() 
{
    flight f;
    f.feedinfo();
    f.showinfo();
}
