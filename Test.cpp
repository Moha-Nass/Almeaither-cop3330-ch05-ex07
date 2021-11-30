/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Mohammed Almeaither
 */

#include<iostream>
#include<cmath>
using namespace std;
void findingRoot(double a, double b, double c)
{
    double i = pow(b,2)-4*a*c;
    if(i<0)
    {
        cout<<"There is no real root.";
    }
    else
    {
        double r1 = (-b-sqrt(i))/2/a;
        double r2 = (-b+sqrt(i))/2/a;
        cout<<"Root 1: "<<r1<<endl;
        cout<<"Root 2: "<<r2<<endl;

    }
}
int main(int argc, char const *argv[]) {

    double a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    findingRoot(a,b,c);





    return 0;
}