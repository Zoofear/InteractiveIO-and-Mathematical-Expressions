// InteractiveIOandMathematical Expressions.cpp : Project 2 Interest Earned
// This program was made to take an inputted principal, interest rate, and compound, to calculate a report

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    //Variables 
    double Amount;          //The amount of savings
    double Principal;       //The original input in the investment
    double InterestRate;    //The rate interest accrues
    int TimesCompounded;    //The amount of times it compounds during a year
    double Interest;        //The amount of interest accrued

    //Input

    cout << "what is your Principal?" << endl;
    cin >> Principal;
    cout << "What is your Interest Rate? " << endl;
    cin >> InterestRate;
    cout << "what number of times has your interest been compounded?" << endl;
    cin >> TimesCompounded;

    //Calculations

    Amount = 1 + (InterestRate / TimesCompounded);
    Amount = pow(Amount, TimesCompounded);          //Needs to be broken apart to use the Pow Function
    Amount = Principal * Amount;

    //Finding the interest

    Interest = Amount - Principal;
    
    //Output
    cout << "Interest Rate:" << setprecision(3) << fixed << setw(10) << InterestRate << endl;
    cout << "Times Compounded:" << setw(10) << TimesCompounded << endl << fixed;
    cout << "Principal:" << setprecision(2) << setw(10) << "$ " << Principal << endl << fixed;
    cout << "Interest:" << setprecision(2) << setw(10) << "$ " << Interest << endl << fixed;
    cout << "Amount in Savings:" << setprecision(2) << setw(10) << "$ " << Amount << endl << fixed;

    return 0;
}