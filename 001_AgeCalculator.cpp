//  Age Calculator
/*
Create a program that tells us how many days, weeks, months we have left if we live until 90 years old.

It will take your current age as the input and output a message with our time left in this format:

You have x days, y weeks, and z months left.

Where x, y and z are replaced with the actual calculated numbers.

Example Input
56
Example Output
You have 12410 days, 1768 weeks, and 408 months left.
*/


#include <iostream>
using namespace std;


int main(){
    int current_age ;
    cout<<"Enter your current age in years: "<<endl;
    cin>>current_age;
    int remaining_years = 90 - current_age;
    cout<<"Considering you will live for 90 years :"<<endl;
    cout<<"You have "<<remaining_years*365<<" days, "<<remaining_years*52<<" weeks and "<<remaining_years*12<<" months left."<<endl;

    return 0;
}