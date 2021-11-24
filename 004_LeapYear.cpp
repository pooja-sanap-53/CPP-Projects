//  Leap Year Challenge

/*
Instructuions : 

Write a program that works out whether if a given year is a leap year.

*/

#include <iostream>
using namespace std;


int main(){
    int year;
    cout<<"Enter the year:"<<endl;
    cin>>year;
    if (year%4==0){
        if(year%100==0){
            if (year%400==0)
            {
                cout<<"Leap Year"<<endl;
            }
            else{
                cout<<"Not a Leap Year"<<endl;
            }
        }
        else{
           cout<<"Leap Year"<<endl;
        }
    }
    else{
        cout<<"Not a Leap Year."<<endl;
    }

    return 0;
}
