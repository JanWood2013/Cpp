#include <iostream>

using namespace std;
using d = double;
using c = char;

int main() 
{
    cout<<""<<endl; //only design
    cout<<"WELCOME TO THE CALCULATOR"<<endl;//welcome message 
    cout<<"only basic operations like +, -, *, / are allowed"<<endl;// shows allowed operators
    cout<<"-------------------------------------------------"<<endl;//only design
    cout<<"made by JanWood2013"<<endl;//owner of the project
    cout<<""<<endl; //only design

    int a = 1; //counts how often the calculator has been used
    while (true) {
        cout<<"--------------------------------------"<<a<<". calculation:"<<endl;//shows how many times the calculator has been used

        double fn;//first number of the calculation 
        cout<<"Enter the first number "<<endl; 
        cin>> fn;
    
        if (cin.fail()) {
            cout << "Invalid input. Please enter a number." << endl; //shows an error message if the input isnt a number
        }

        c op;//operator of the calculation (only +, -, *, / are valid)
        cout << "Enter operator (+, -, *, /): "<<endl;
        cin >> op;


        d sn; //second number of the calcutaion
        cout<<"Enter the second number "<<endl;
         cin>> sn;

        if (cin.fail()) {
         cout<<"Invalid input. Please try again."<<endl; //shows an error message if the input isnt a number
        }

        if (op == '/'){
            cout<<"Result: "<<fn/sn<<endl; //shows the result of the calculation if the operator is / (devide)
        }
        else if (op == '*')
        {
            cout<<"Result: "<<fn*sn<<endl; //shows the result of the calculation if the operator is * (multiply)
        }
        else if (op == '-'){
            cout<<"Result: "<<fn-sn<<endl; //shows the result of the calculation if the operator is - (subtract) 
        }
        else if (op == '+'){
            cout<<"Result: "<<fn+sn<<endl; //shows the result of the calculation if the operator is + (add)
        }
        else {
            cout<<"Enter a valid operator"<<endl; //if the operator isnt valid it will show an error message
        }
        cout<<""<<endl; //only design
        a += 1; //adds a calculation to the counter 
    }
}
//Please give me feedback in my discussion on my GitHub -> cpp -> calculator.cpp