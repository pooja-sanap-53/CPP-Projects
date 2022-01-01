//  Pizza Order 
/*
Instructions
Congratulations, you've got a job at C++ Pizza. Your first job is to build an automatic pizza order program.

Based on a user's order, work out their final bill.

Small Pizza: $15
Medium Pizza: $20
Large Pizza: $25
Pepperoni for Small Pizza: +$2
Pepperoni for Medium or Large Pizza: +$3
Extra cheese for any size pizza: + $1

*/

#include <iostream>
#include <string>
using namespace std;


int main(){
    string size, pep;
    int total = 0;
    cout<<"Welcome to Pizza Hut!!"<<endl;
    cout<<"\nWhich size of Pizza do you want?\nPress 'S' for small size\nPress 'M' for medium size\nPress 'L' for large size\n";
    cin>> size;
    
    if (size == "S"){
        cout<<"Price for small size pizza is $15"<<endl;
        total = 15;
    }

    else if (size == "M"){
        cout<<"Price for medium size pizza is $20"<<endl;
        total = 15;

    }

    else if (size == "L"){
        cout<<"Price for large size pizza is $25"<<endl;
        total = 25;
    }

    else{
        cout<<"Ivalid Input"<<endl;
    }
    
    cout<<"Do you want to take Pepperoni? Y or N"<<endl;
    cin>>pep;
    if (pep=="Y"){
        if (size == "S"){
            cout<<"The price of Pepperoni for "<<size<< " size pizza is "<<"$2."<<endl;
            total = total + 2;
        }
        if (size == "L" || size == "M"){
            cout<<"The price of Pepperoni for "<<size<< " size pizza is "<<"$3."<<endl;
            total = total + 3;
        }
    }

    cout<<"Do you want to take Cheese? Y or N"<<endl;
    cin>>pep;
    if (pep=="Y"){
        cout<<"The price of Cheese for any size pizza is "<<"$1."<<endl;
        total = total + 1;
        
    }

    cout<< "The total of your bill is $"<< total;

    return 0;
}