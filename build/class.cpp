#include<iostream>
using namespace std;
class Flight 
{
private:
    int FlightNumber;
    char Destination[50];  
    float Distance;
    float Fuel;

    void CALFUEL() {
        if (Distance <= 1000)
            Fuel = 500;
        else if (Distance > 1000 && Distance <= 2000)
            Fuel = 1100;
        else
            Fuel = 2200;
    }

public:
    void FEEDINFO() 
    {
        cout << "Enter Flight Number: ";
        cin >> FlightNumber;

        cout << "Enter Destination: ";
        cin.ignore();  
        cin.getline(Destination, sizeof(Destination));

        cout << "Enter Distance: ";
        cin >> Distance;

        CALFUEL();  

        cout << "Information feeding complete!" << std::endl;
    }

    void SHOWINFO() 
    {
        cout << "Flight Number: " << FlightNumber << std::endl;
        cout << "Destination: " << Destination << std::endl;
        cout << "Distance: " << Distance << " km" << std::endl;
        cout << "----------------------------------------------" <<endl;
        cout << "Fuel: " << Fuel << " liters" << std::endl;
        cout << "----------------------------------------------" <<endl;
    }
};

int main() 
{
    Flight flightObject;
    flightObject.FEEDINFO();
    flightObject.SHOWINFO();

    return 0;
}