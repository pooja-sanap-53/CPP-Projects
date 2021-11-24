//  BMI 2.0

/*
Instructions

Write a program that interprets the BMI based on a users height and weight.
- Under 18.5 - underweight
- over 18.5 but below 25 - normal
- over 25 but below 30 - overweight
- over 30 but below 35 - obese
- over 35 - clinically obese

*/

#include <iostream>
using namespace std;


int main(){
    float ht, wt;
    cout<<"Enter your height in meters:"<<endl;   
    cin>>ht; 
    cout<<"Enter your weight in kilograms:"<<endl;   
    cin>>wt;

    float bmi = wt/(ht*ht) ;
    cout<<"Your BMI is "<<bmi<<endl;

    if (bmi>18.5){
        cout<<"Your are underweight.";
    }

    else if (18.5<bmi<25){
        cout<<"You have normal weight.";
    }

    else if (25<bmi<30){
        cout<<"You are overweight.";
    }

    else if(30<bmi<35){
        cout<<"You are obese.";
    }

    else{
        cout<<"You are clinically obese.";
    }
    return 0;
}