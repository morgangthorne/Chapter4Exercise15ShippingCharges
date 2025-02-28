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
    cout << setw(20) << right << "|" << setw(60) << "Fast Freight Shipping Company Rates" << setw(26) << "|" << endl;
    cout << setw(20) << right << "|" << setw(21) << "Weight of Package (in Kilograms)";
    cout << setw(54) << right << "Rate per 500 Miles Shipped|" << endl;
    cout << setw(20) << right << "|" << "2 KG or less" << setw(52) << right << "$1.10" << setw(22) << right << "|" << endl;
    cout << setw(20) << right << "|" << "Over 2 KG but not more than 6 KG" << setw(32) << right << "$2.20";
    cout << setw(22) << right << "|" << endl;
    cout << setw(20) << right << "|" << "Over 6 KG but not more than 10 KG" << setw(31) << right << "$3.70";
    cout << setw(22) << right << "|" << endl;
    cout << setw(20) << right << "|" << "Over 10 KG but not more than 20 KG" << setw(30) << right << "$4.80";
    cout << setw(22) << right << "|" << endl;
    cout << setw(106) << right << "|_____________________________________________________________________________________|" << endl;
    
    //User entering Weight of package, using else if to assign amount to rate
    cout << endl;
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
            cout << "Rate per 500 miles: $1.10" << endl;
        }
        else if (PackageWeight <= 6) {
            Rate = 2.20;
            cout << "Rate per 500 miles: $2.20" << endl;
        }
        else if (PackageWeight <= 10) {
            Rate = 3.70;
            cout << "Rate per 500 miles: $3.70" << endl;
        }
        else if (PackageWeight <= 20) {
            Rate = 4.80;
            cout << "Rate per 500 miles: $4.80" << endl;
        }

        //User enters miles, miles and rate will be put into a function to determine shipping rate
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

