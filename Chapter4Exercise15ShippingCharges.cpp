/*
Filename: Chapter4Exercise15ShippingCharges.cpp
Programmer: Morgan Thorne
Date: February 2025
Requirments: Write a program that asks for the weight of the package and the distance
it is to be shipped, then displays the charges.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//Rates for package weight
    double PackageWeight;
//Rate per 500 miles shipped
    double Rate;
    double miles;

//Display Menu
    cout << fixed << setw(70) << right << "Fast Freight Shipping Company Rates" <<  endl;
    cout << setw(50) << "Weight of Package (in Kilograms)" << setw(60) << right << "Rate per 500 Miles Shipped" << endl;

    cout << "What is the weight of the package in KG?: ";
    cin >> PackageWeight;

    while (PackageWeight < 0.1 || PackageWeight > 20)
    {
        cout << "We do not accept packages that weigh 0 KG or less and anything more than 20 KG." << endl;
        cout << "Please enter a weight within the companies limits." << endl;
        cin >> PackageWeight;
    }
    
    {
        if (PackageWeight <= 2) {
            Rate = 1.10;
            cout << "You have rate A" << endl;
        }
        else if (PackageWeight <= 6) {
            Rate = 2.20;
            cout << "You have rate B" << endl;
        }
        else if (PackageWeight <= 10) {
            Rate = 3.70;
            cout << "You have rate C" << endl;
        }
        else if (PackageWeight <= 20) {
            Rate = 4.80;
            cout << "You have rate D" << endl;
        }


        cout << "How many miles are you shipping your package?: ";
        cin >> miles;

        while (miles < 10 || miles > 3000)
        {
            cout << "You cannot ship any product less than 10 miles or more than 3000 miles." << endl;
            cout << "Please enter a distance within the companies limits: " << endl;
            cin >> miles;
        }
        
        double shippingRate = (Rate/500) * miles;
        cout << "The price of shipping is $" << fixed << setprecision(2) << shippingRate;
    }
    
   
}

