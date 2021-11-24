//  Odd Even Number
/*
Instructions 
Write a program that works out whether if a given number is an odd or even number.
*/

#include <iostream>
using namespace std;


int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    if (num==0){
        cout<<num<<" is neither even nor odd number."<<endl;
    }

    else if(num%2==0){
        cout<<num<<" is an even number."<<endl;
    }

    else{
        cout<<num<<" is a odd number."<<endl;
    }
    
    return 0;
}